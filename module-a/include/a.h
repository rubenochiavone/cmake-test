#pragma once

#include "base.h"

class A : public Base {

	int a;

	public:
		A(int a) : a(a), Base(-1) {}

		void print();

		void work() const;

		int getA() const { return this->a; }
		void setA(int a) { this->a = a; }
};
