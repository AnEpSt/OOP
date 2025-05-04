#include "Rectangle.h"
#include <QPainter>

Rectangle::Rectangle(const QRect& rect)
    : m_rect(rect) {}

void Rectangle::paint(QPainter* painter) const {
    painter->save(); // Сохраняем текущие настройки пэйнтера
    
    // Настраиваем стиль рисования
    QPen pen(Qt::black, 2); // Чёрная обводка толщиной 2 пикселя
    pen.setStyle(Qt::SolidLine);
    painter->setPen(pen);
    
    // Настраиваем заливку
    painter->setBrush(QBrush(Qt::green, Qt::SolidPattern));
    
    // Рисуем прямоугольник
    painter->drawRect(m_rect);

    painter->restore(); // Восстанавливаем настройки пэйнтера
}
