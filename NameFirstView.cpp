#include <iostream>
#include "NameFirstView.h"

void NameFirstView::print() {
    std::cout << m_namemodel->first() << " " << m_namemodel->last() << endl;
}
