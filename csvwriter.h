#ifndef CSVWRITER_H
#define CSVWRITER_H

#include <fstream>
#include "music.h"

class CsvWriter
{
public:
    CsvWriter(const std::string& filename);
    bool is_open() const;
    void write(const music& m);

private:
    std::ofstream fout;
};

#endif // CSVWRITER_H
