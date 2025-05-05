#ifndef FIGUREWIDGET_H
#define FIGUREWIDGET_H
#include <QWidget>
#include <vector>
#include <memory>

class Figure;

class FigureWidget : public QWidget {
    Q_OBJECT
public:
    explicit FigureWidget(const std::string& jsonPath, QWidget* parent = nullptr);
    void paintEvent(QPaintEvent* event) override;

private:
    std::vector<std::unique_ptr<Figure>> m_figures;
};
#endif // FIGUREWIDGET_H
