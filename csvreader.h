#ifndef CSVREADER_H
#define CSVREADER_H

#include <string>
#include <vector>
#include "music.h"
#include <fstream>

class CsvReader
{
public:
    CsvReader(const std::string& filename);
    bool is_open() const;
    std::vector<music> readALL();

private:
    std::ifstream fin;
};

#endif // CSVREADER_H
