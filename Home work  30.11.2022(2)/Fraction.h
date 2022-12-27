#pragma once
#include <string>
//numerator числитель
//denominator знаменатель
class Fraction
{
public:
Fraction(int numerator, int denominator);
int getNumerator() const;
void setNumerator(int numerator);
int getDenominator() const;
void setDenominator(int denominator); 
void operator/(Fraction& other);
void operator*(Fraction& other);
void operator+(Fraction& other);
void operator-(Fraction& other);

private:
	int _numerator;
	int _denominator;
};
