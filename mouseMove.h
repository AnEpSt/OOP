#ifndef MOUSEMOVE_H
#define MOUSEMOVE_H
#include <QWidget>
#include <QMouseEvent>

class mouseMove: public QWidget {
public:
    explicit mouseMove(QWidget* parent = nullptr);
    virtual void mouseMoveEvent(QMouseEvent *event) override;
    virtual void mousePressEvent(QMouseEvent *event) override;
    virtual void mouseReleaseEvent(QMouseEvent *event) override;
};

#endif // MOUSEMOVE_H
