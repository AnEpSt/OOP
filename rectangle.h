#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Figure.h"
#include <QRect>

class Rectangle : public Figure {
public:
    Rectangle(const QRect& rect);
    void paint(QPainter* painter) const override;

private:
    QRect m_rect;
};
#endif // RECTANGLE_H
