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
