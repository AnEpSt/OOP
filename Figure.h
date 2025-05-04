#ifndef FIGURE_H
#define FIGURE_H
#include <QPainter>
#include <QJsonObject>
#include <vector>
#include <string>
#include "remix.h"

class Figure {
public:
    virtual ~Figure(){}
    vvirtual void paint(QPainter* painter) const = 0;
    virtual QJsonObject toJson() const = 0;
};

#endif // FIGURE_H
