#ifndef FIGURE_H
#define FIGURE_H
#include <vector>
#include <string>
#include "remix.h"

class Figure {
public:
    virtual ~Figure(){}
    vvirtual void paint(QPainter* painter) const = 0;
};

#endif // FIGURE_H
