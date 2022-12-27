#include "Fraction.h"
#include <iostream>

Fraction::Fraction(int numerator, int denominator) {
	_numerator = numerator;
	_denominator = denominator;
}
int Fraction::getNumerator() const {
	return _numerator;
}
void Fraction::setNumerator(int numerator) {
	_numerator = numerator;
}
int Fraction::getDenominator() const {
	return _denominator;
}
void Fraction::setDenominator(int denominator) {
	_denominator = denominator;
}
void Fraction::operator/(Fraction& other) {
	std::cout << "Результат деления = " << (_numerator * other._denominator) / (_denominator * other._numerator) << '\n';
}
void Fraction::operator*(Fraction& other) {
	int new_numerator = _numerator * other._numerator;
	int new_denominator = _denominator * other._denominator;
	std::cout << "Результат умножения = ";
	std::cout << new_numerator << "\\" << new_denominator << '\n';
}
void Fraction::operator+(Fraction& other) {
	if (_denominator != other._denominator) {
		int new_numerator = (_numerator * other._denominator) + (_denominator * other._numerator);
		int new_denominator = _denominator * other._denominator;
		std::cout << "Результат сложения = ";
		std::cout << new_numerator << "\\" << new_denominator << '\n';
	}
	if (_denominator == other._denominator){
		int new_numerator = _numerator + other._numerator;
	int new_denominator = _denominator;
	std::cout << "Результат сложения = ";
	std::cout << new_numerator << "\\" << new_denominator << '\n';
	}
}
void Fraction::operator-(Fraction& other) {
	if (_denominator != other._denominator) {
		int new_numerator = (_numerator * other._denominator) - (_denominator * other._numerator);
		int new_denominator = _denominator * other._denominator;
		std::cout << "Результат вычитания = ";
		std::cout << new_numerator << "\\" << new_denominator << '\n';
	}
	if (_denominator == other._denominator) {
		int new_numerator = _numerator - other._numerator;
		int new_denominator = _denominator;
		std::cout << "Результат вычитания = ";
		std::cout << new_numerator << "\\" << new_denominator << '\n';
	}
}