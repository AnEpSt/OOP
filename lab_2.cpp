#include <fstream>
#include "csvreader.h"

CsvReader::CsvReader(const std::string& filename){
    fin.open(filename);
    } // fin delete
bool CsvReader::is_open() const{
    return (fin.is_open());
}
std::vector<music>  CsvReader::readALL(){
    std::vector<music> vec;
    while (!fin.eof()){ //EOF - end of file
        std::string line;
        std::getline(fin,line);
        music m;
        std::string token;
        int k = 0;
        for (int i= 0; i<line.size();++i ){
            if(line[i] != ';'){
                token += line[i];
            }
            else{
                k = k+1;
                switch(k){
                case 0: m.setName(token+='\n');break;
                case 1: m.setYear(std::stoi(token));break;
                case 2: m.setAuthor((token+='\n'));break;
                }
                break;
            }
        }
        vec.push_back(m);
    }
    return vec;
}


