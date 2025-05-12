#ifndef MOUSEMOVE_H
#define MOUSEMOVE_H

#include <QWidget>
#include <QMouseEvent>
#include <vector>
#include <memory>
#include "Figure.h"

class mouseMove : public QWidget {
private:
    std::vector<std::unique_ptr<Figure>> figures;
    Figure* highlightedFigure = nullptr;
public:
    explicit mouseMove(QWidget* parent = nullptr);
    void addFigure(std::unique_ptr<Figure> figure);
    void mouseMoveEvent(QMouseEvent* event) override;
    void paintEvent(QPaintEvent* event) override;


};

#endif // MOUSEMOVE_H
