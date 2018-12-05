#include <iostream>
#include "NameLastView.h"

void NameLastView::print() const {
    std::count << m_namemodel->lastName() << " " << m_namemodel->firstName() << endl;
}
