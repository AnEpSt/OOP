#include "mytextbrowser.h"

MyTextbrowser::MyTextbrowser(QWidget *parent):QTextBrowser(parent) {}
void MyTextbrowser::appendmusic(const remix &m){
    this->append(QString::fromStdString(m.name())+ " " +QString::fromStdString(m.author())+" "+ QString::number(m.year()) + " " +QString::number(m.proslushivanie())+" " +QString::fromStdString(m.genre())+" " +QString::fromStdString(m.feat()) );
}
