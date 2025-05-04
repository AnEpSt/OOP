#include "jsonreader.h"
#include  <fstream>
#include "remix.h"

JsonReader::JsonReader(const std::string& filename){
    fin.open(filename);
}
bool JsonReader::is_open() const{
    return fin.is_open();
}
std::vector<remix> JsonReader::readALL(){
    std::vector<remix> rem;
    std::string name;
    std::string author;
    int year;
    int prosl;
    std::string genre;
    std::string feat;
    // while (!fin.eof()){
        json j;
        fin >> j;
        remix c;
        for (const auto& e: j) {

            e["name"].get_to(name);
            e["author"].get_to(author);
            e["year"].get_to(year);
            e["prosl"].get_to(prosl);
            e["genre"].get_to(genre);
            e["feat"].get_to(feat);

            c.setName(name);
            c.setAuthor(author);
            c.setprosl(prosl);
            c.setYear(year);
            c.setgenre(genre);
            c.setfeat(feat);
            rem.push_back(c);
        }

    // }
        return rem;
}
std::vector<std::unique_prt<Figure>> JsonReader::readALL(){
    std::vector<std::unique_ptr<Figure>> figures;
    
    if (!is_open()) {
        return figures;
    }
    try {
        json j;
        fin >> j;
        for (const auto& e :j){
            std::string type = e["type"].get<std::string>();
            if (type == "circle"){
                int x = e["X"].get<int>();
                int y = e["Y"].get<int>();
                int rad = e["rad"].get<float>();
                figures.push_back(std::make_unique<Circle>(QPoint(x, y), rad));
            }
            else if (type == "rectangle") {
                int x = e["X"].get<int>();
                int y = e["Y"].get<int>();
                int w = e["width"].get<float>();
                int h = e["height"].get<float>();
                figures.push_back(std::make_unique<Rectangle>(QRect(x, y, w, h)));
            }
        } 
    }    
    } catch (const json::exception& e) {
        
    }
    return figures;
}
