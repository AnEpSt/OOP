#include "Figure.h"
#include "Circle.h"
#include "Rectangle.h"
std::unique_ptr<Figure> Figure::fromJson(const QJsonObject& json){
  QString type = json["type"].toString().toLower();
  if (type == "circle"){
    return std::make_unique<Circle>(json);
  } else if (type = "rectangle"){
    return std::make_unique<Rectangle>(json);
  }
}
