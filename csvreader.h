#ifndef CSVREADER_H
#define CSVREADER_H

#include <string>
#include <vector>
#include "music.h"
#include <fstream>

class CsvReader: public AbstractReader
{
public:
    CsvReader(const std::string& filename);
    bool is_open() const override;
    std::vector<music> readALL() override;

private:
    std::ifstream fin;
};

#endif // CSVREADER_H
