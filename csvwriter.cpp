#include "csvwriter.h"
#include "remix.h"

CsvWriter::CsvWriter(const std::string& filename)
{
    fout.open(filename, std::ios::app);
}

bool CsvWriter::is_open() const
{
    return fout.is_open();
}

void CsvWriter::write(const remix& m)
{
    if (fout.is_open()) {
        fout << m.name() << ";" << m.author() << ";" << m.year() << ";" << m.proslushivanie() << "\n";
    }
}
