#ifndef NAMECONTROLLER_H
#define NAMECONTROLLER_H

#include <QObject>
#include "NameModel.h"

class NameController : public QObject(){
    QObject
private:
    NameModel m_name;
public:
    NameController(model : NameModel*, parent : QObject* = 0) : {}
    public slot:
    void getName();
signal:
    void quit();
};

#endif
