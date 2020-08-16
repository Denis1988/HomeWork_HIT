#include "polynomial.h"

class Rational {
private:
	int num;
public:
	void print();
	double getNom();
	double getDenom();
	friend std::ostream& operator<<(std::ostream& os, const Rational& po);
	Rational();
	Rational(Polynomial one, Polynomial two);
};