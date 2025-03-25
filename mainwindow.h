#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "music.h"
#include "remix.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{

    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void add();
    void LoadData();

private:
    Ui::MainWindow *ui;
    std::vector<remix> vec;
};

#endif // MAINWINDOW_H
