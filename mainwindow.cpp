#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "csvreader.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    CsvReader reader ("music.csv");

    if (reader.is_open()) {
        std::vector<music> mus = reader.readAll();

        for (const auto& c: mus) {
            ui->textBrowser->append(QString::fromStdString(c.name()) + " " + QString::fromStdString(c.author())+ " " + QString::number(c.year()) + " " + QString::number(c.proslushivanie()));
        }
    } else {
        ui->textBrowser->append("Ошибка при открытии файла");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
