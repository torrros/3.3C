#pragma once
#include "Object.h"
#include <iostream>
#include <sstream>

using namespace std;

class Rational:public Object
{
	int a;
	int b;
public:
	Rational(int a = 0, int b = 0);
	Rational(const Rational& r);
	~Rational() {};
	Rational& operator=(const Rational& r);
	
	int geta() const { return a; }
	int getb() const { return b; }
	void seta(int a) { this->a = a; }
	void setb(int b) { this->b = b; }
	
	friend	istream& operator>>(istream& is, Rational& r);
	friend	ostream& operator<<(ostream& os, const Rational& r);
	operator string()const;
	
	double value ()const{ return a / b; }
	
	friend Rational operator/(const Rational& r1, const Rational& r2);
	friend bool operator==(const Rational& r1, const Rational& r2);
	friend bool operator>(const Rational& r1, const Rational& r2);
	friend bool operator<(const Rational& r1, const Rational& r2);

	Rational operator++();
	Rational operator++(int);
	Rational operator--();
	Rational operator--(int);
	
};

