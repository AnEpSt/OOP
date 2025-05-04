#ifndef CIRCLE_H
#define CIRCLE_H
#include "Figure.h"
#include <QPoint>
class Circle : public Figure{
private:
  Qpoint cir_centre;
  int cir_rad;
public:
  Circle(const QPoint& cir_centre, int cir_rad);
  void paint(QPainter* painter) const override;

};
#endif // CIRCLE_H
