#ifndef CIRCLE_H
#define CIRCLE_H
#include "Figure.h"
class Circle : public Figure{
private:
  Qpoint cir_c0entre;
  int cir_rad;
public:
  Circle(const QJsonObject& json);
  void paint(QPainter* painter) const override;
  QJsonObject toJson() const override;

};
#endif // CIRCLE_H
