#ifndef RATIONAL_H
#define RATIONAL_H
#include "polynomial.h"

class Rational {
private:
	int num = 0;
public:
	void print();
	double getNom();
	double getDenom();
	friend ostream& operator<<(ostream& os,Rational const &po);
	Rational();
	Rational(Polynomial one, Polynomial two);
};

#endif