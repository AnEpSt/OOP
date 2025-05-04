#ifndef JSONREADER_H
#define JSONREADER_H
#include "abstractreader.h"
#include <fstream>
#include <json.hpp>
#include "remix.h"

using json =  nlohmann::json;
class JsonReader : public AbstractReader
{
private:
    std::fstream fin;
public:
    JsonReader(const std::string& filename);
    bool is_open() const override;
    std::vector<remix> readALL() override;
    std::vector<std::unique_ptr<Figure>> readAll();
};
#endif // JSONREADER_H
