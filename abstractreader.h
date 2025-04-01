#ifndef ABSTRACTREADER_H
#define ABSTRACTREADER_H
#include <vector>
#include <string>
#include "remix.h"

class AbstractReader {
public:
    virtual ~AbstractReader(){}
    virtual std::vector<remix> readALL() = 0;
    virtual bool is_open() const=0;
};

#endif // ABSTRACTREADER_H
