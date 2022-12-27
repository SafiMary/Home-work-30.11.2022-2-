#include <iostream>
#include <string>
#include "Fraction.h"

int main() {
	setlocale(LC_ALL, "Russian");
	Fraction a(12, 4);
	Fraction b(4, 2);
	a.operator/(b);
	a.operator*(b);
	a.operator+(b);
	a.operator-(b);
}