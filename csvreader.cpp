#include "csvreader.h"
#include <fstream>
#include "err.h"
CsvReader::CsvReader(const std::string& filename)
{
    fin.open(filename);
}

bool CsvReader::is_open() const
{
    return fin.is_open();
}

std::vector<remix> CsvReader::readALL()
{
    std::vector<remix> rem;
    while (!fin.eof()) {
        std::string line;
        std::getline(fin, line);
        if (line.empty()) continue;

        remix c;
        int k = 0;
        std::string token;

        for(int i = 0; i < line.size(); ++i) {
            if(line[i] != ';') {
                token += line[i];
            }
            else {
                switch(k) {
                case 0: c.setName(token); break;
                case 1: c.setAuthor(token); break;
                case 2: 
                    try{
                         int year = std::stoi(token);
                         if (year >2025){
                             throw err("Не возможный год", 36);
                         }
                              c.setYear(year);
                    }
                    catch (const err& e){
                        std::cout <<e.what() <<"Строка"<< ex.str_err() << std::endl;
                    }
                    break;
                case 3:
                    try{
                         int prosl = std::stoi(token);
                         if (prosl <0){
                             throw err("Не возможное кол-во прослушиваний", 48);
                         }
                              c.setprosl(prosl);
                    }
                    catch (const std::err& e){
                        std::cout <<e.what() <<"Строка"<< e.str_err() << std::endl;
                    }
                    break;
                case 4: c.setgenre(token); break;
                case 5: c.setfeat(token); break;
                }
                token.clear();
                k++;
            }
        }
        if (!token.empty()){
            c.setprosl(std::stoi(token));
        }
        rem.push_back(c);
    }
    return rem;
}
