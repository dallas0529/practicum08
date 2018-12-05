#include <iostream>
#include "NameController.h"

void NameController::getData() {
    std::string first, last;
    std::cout << "Enter first name: " << endl;
    std::cin >> first;
    if(first == ":end") {
        emit quit();
    }
    else {
        std::cout << "Enter last name: " << endl;
        std::cin >> lastName;
        m_namemodel->setName(first, last);
    }
}

