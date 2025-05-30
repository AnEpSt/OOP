#include "circle.h"
#include <QPainter>
Circle::Circle(const QPoint& center, int radius): m_center(center), m_radius(radius) {}
void Circle::paint(QPainter* painter) const {
    painter->save(); 
    painter->setPen(Qt::black); 
    painter->setBrush(Qt::blue); 
    painter->drawEllipse(m_center, m_radius, m_radius);
    
    painter->restore(); 
    
}
