#include <iostream>
#include <QCoreApplication>
#include <QTimer>
#include "NameController.h"
#include "NameModel.h"
#include "NameFirstView.h"
#include "NameLastView.h"

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);
    QTimer timer(&app);
    NameModel namemodel;
    NameController namecontroller(&namemodel);
    NameFirstView namefirstview(&namemodel);
    NameLastView namelastview(&namemodel);
    
    QObject::connect(&namemodel, SIGNAL(nameChanged()), &namefirstview, SLOT(updateView()));
    QObject::connect(&namemodel, SIGNAL(nameChanged()), &namelastview, SLOT(updateView()));
    QObject::connect(&namecontroller, SIGNAL(quit()), &app, SLOT(quit()));
    QObject::connect(&timer, SIGNAL(timeout()), &namecontroller, SLOT(getData()));
    
    timer.start(0);
    int returnValue = app.exec*();
    cout << endl;
    return returnValue;
}
