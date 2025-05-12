#include "mouseMove.h"
#include <QPainter>

mouseMove::mouseMove(QWidget* parent) : QWidget(parent) {
    setMouseTracking(true);
}

void mouseMove::addFigure(std::unique_ptr<Figure> figure) {
    figures.push_back(std::move(figure));
}

void mouseMove::mouseMoveEvent(QMouseEvent* event) {
    QPointF cursorPos = event->position();
    bool needUpdate = false;
    
    // Сначала сбрасываем подсветку у всех фигур
    if (highlightedFigure) {
        highlightedFigure->setHighlighted(false);
        highlightedFigure = nullptr;
        needUpdate = true;
    }
    
    // Проверяем, находится ли курсор внутри какой-либо фигуры
    for (const auto& figure : figures) {
        if (figure->isPointInside(cursorPos)) {
            figure->setHighlighted(true);
            highlightedFigure = figure.get();
            needUpdate = true;
            break;
        }
    }
    
    if (needUpdate) {
        update(); // Перерисовываем виджет
    }
    
    QWidget::mouseMoveEvent(event);
}

void mouseMove::paintEvent(QPaintEvent* event) {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    
    // Рисуем все фигуры
    for (const auto& figure : figures) {
        figure->paint(painter);
    }
}
