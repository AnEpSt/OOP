#ifndef MYTEXTBROWSER_H
#define MYTEXTBROWSER_H
#include <QTextBrowser>
#include "remix.h"
class MyTextbrowser: public QTextBrowser{
    Q_OBJECT
public:
    MyTextbrowser(QWidget *parrent);
    void appendmusic(const remix& m);
};

#endif // MYTEXTBROWSER_
