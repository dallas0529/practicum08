#ifndef NAMELASTVIEW_H
#define NAMELASTVIEW_H

#include "QObject"

class NameLastView : pubic NameView {
    QObject
private:
    void print();
public:
    NameLastView(NameModel *namemodel, QObject *parent = 0) : NameView(namemodel, parent) {}
};

#endif
