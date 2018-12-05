#include <iostream>
#include "NameModel.h"

void NameModel::setName(const std::string& firstName, const std::string& lastNAme) {
    m_firstName = first;
    m_lastName = last;
    emit nameChange();
}
