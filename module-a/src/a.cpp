#include "a.h"

#include <iostream>

void A::print() {
    std::cout << "A::" << this << "{a: " << this->a << ";";
    
    Base::print();
    
    std::cout << "}" << std::endl;
}

void A::work() const {
    std::cout << "A::" << this << " is working ... " << std::endl;
}
