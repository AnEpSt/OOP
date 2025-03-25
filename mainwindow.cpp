#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "csvreader.h"
#include "csvwriter.h"
#include "MyTextbrowser.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    LoadData();
}
    //ui->textBrowser->append("Hello QT");
 void MainWindow::LoadData(){
     ui->textBrowser->clear();
    CsvReader reader("music.csv");// open file
    if (reader.is_open()){
        vec = reader.readALL();
        for (const auto& m:vec){
            ui->textBrowser->appendmusic(m);
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
    CsvWriter writer("music.csv");
    QString name = ui->linesearch->text();
    QString author = ui->linesearch1->text();
    int year = ui->linesearch2->text().toInt();
    int proslushivanie = ui->linesearch3->text().toInt();
    QString genre = ui->linesearch4->text();
    QString feat = ui->linesearch5->text();
    remix m;
    vec.push_back(m);
    if (writer.is_open()){
        remix m(name.toStdString(),genre.toStdString(),feat.toStdString());

        writer.write(m);
//LoadData();
        ui->textBrowser->appendmusic(m);
}
}
