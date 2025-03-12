#include "csvwriter.h"

CsvWriter::CsvWriter(const std::string& filename)
{
    fout.open(filename, std::ios::app);
}

bool CsvWriter::is_open() const
{
    return fout.is_open();
}

void CsvWriter::write(const music& m)
{
    if (fout.is_open()) {
        fout << m.name() << ";" << m.author() << ";" << m.year() << ";" << m.proslushivanie() << "\n";
    }
}
