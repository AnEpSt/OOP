#ifndef JSONREADER_H
#define JSONREADER_H
#include "abstractreader.h"
#include <fstream>
#include <nlohmann/json.hpp>

using json =  nlohmann::json;
class JsonReader : public AbstractReader
{
private: 
  std::fstream fin;
public:
  CsvReader(const std::string& filename);
  bool is_open() const override;
  std::vector<music> readALL() override;
};
#endif // JSONREADER_H
