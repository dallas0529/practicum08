#ifndef NAMEMODEL_H
#define NAMEMODEL_H

#include <QObject>

class NameModel : public QObject {
    QObject
private:
    std::string m_firstName;
    std::string m_lastName;
public:
    NameModel(QObject *parent = 0) : QObject(parent) {}
    std::string first() const {return m_firstName);
        std::string last() const {return m_lastName};
        void setName(std::string& firstName, std::string& lastName);
    signal:
        void nameChanged();
    };
    
#endif
