#include "polynomial.h"


Polynomial::Polynomial(int i) {
	setItem(i, 0);
	
}

int Polynomial::getMaxDegree() {
	return 0;
}

Polynomial::Polynomial(double* item) {
	for (int i = 0; i < sizeof(item); i++) {
		setItem(item[i], i);
	}

}

Polynomial::Polynomial(double* item, int i) {
	for (int j = 0; j < i; j++) {
		setItem(item[j], j);
	}

}

void Polynomial::setCoeff(int n, double h) {

}




void Polynomial::setItem(double d,int i) {
	this->item[i] = &d;
}

Polynomial Polynomial::operator << (Polynomial p) {
	double d[sizeof()];

	for (int i = 0,int j = 0; i < sizeof(p); i++,j+2) {
		d[i] = *p.item[i];
	}
}