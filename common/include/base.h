#pragma once

#include <iostream>

class Base {

    int b;

    public:
        Base(int b) : b(b) {}
        virtual ~Base() {}

        virtual void print() { std::cout << "b: " << b; }

        virtual void work() const = 0;
};
