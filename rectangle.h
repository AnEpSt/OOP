#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Figure.h"
#include <QRect>
class Rectangle : public Figure{
private:
  QRect m_rect;
public:
  Rectangle(const QRect& rect);
  void paint(QPainter* painter) const override;
}
#endif // RECTANGLE_H
