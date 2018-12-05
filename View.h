#ifndef VIEW_H
#define VIEW_H

#include <QObject>
#include "NameModel.h"

class View : public QObject {
    QObject
private:
    NameModel *m_namemodel;
    virtual void print() const = 0;
public:
    View(NameModel *namemodel, QObject *parent = 0) : m_namemodel(namemodel), QObject(parent) {}
    public slot:
    void updateView();
};

#endif
