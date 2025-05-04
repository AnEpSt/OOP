#ifndef FIGURE_H
#define FIGURE_H
#include <vector>
#include <string>
#include "remix.h"

class Figure {
public:
    virtual ~Figure(){}
    vvirtual void paint(QPainter* painter) const = 0;
    virtual QJsonObject toJson() const = 0;
    static std::unique_ptr<Figure> fromJson(const QJsonObject& json);
};

#endif // FIGURE_H
