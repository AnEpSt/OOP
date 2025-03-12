#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "csvreader.h"
#include "csvwriter.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
    //ui->textBrowser->append("Hello QT");
 void MainWindow::LoadData(){
     ui->textBrowser->clear();
    CsvReader reader("music.csv");// open file
    if (reader.is_open()){
        std::vector<music> vec = reader.readALL();
        for (const auto& m:vec){
            ui->textBrowser->append(QString::fromStdString(m.name())+ " " + QString::number(m.year()) + " " +QString::number(m.proslushivanie()) + " " + QString::fromStdString(m.author()));
        }
        }
    else{
        ui->textBrowser->append("Ошибка при открытии файла");
    }
    }

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::add(){

    std::vector<music> vec;
    CsvWriter writer("music.csv");
    if (writer.is_open()){
        QString line = ui->linesearch->text();
        QString line1 = ui->linesearch1->text();
        QString line2 = ui->linesearch2->text();
        QString line3 = ui->linesearch3->text();

        QStringList d    = line.split(" ");

        music m(line.toStdString(),line1.toInt(),line2.toInt(),line3.toStdString());
        writer.write(m);
        LoadData();

    CsvReader reader("music.csv");
    if (reader.is_open()){
        std::vector<music> vec = reader.readALL();
        for (const auto& m:vec){
            ui->textBrowser->append(QString::fromStdString(m.name())+ " " + QString::number(m.year()) + " " +QString::number(m.proslushivanie()) + " " + QString::fromStdString(m.author()));
        }
    }
    else{
        ui->textBrowser->append("Ошибка при открытии файла");
    }

}
}
