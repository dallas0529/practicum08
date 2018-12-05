#ifndef NAMEFIRSTVIEW_H
#define NAMEFIRSTVIEW_H

#include "QObject"
#include "NameModel.h"
#include "View.h"

class NameFirstView : public View(){
    QObject
protected:
    void print();
public:
    NameFirstView(NameModel *NameModel, QObject *parent = 0) : View(NameModel, parent) {}
};

#endif
