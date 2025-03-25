#include "csvreader.h"
#include <fstream>

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
                case 2: c.setYear(std::stoi(token)); break;
                case 3: c.setprosl(std::stoi(token)); break;
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
