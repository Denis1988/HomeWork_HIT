#include "polynomial.h"

Polynomial::Polynomial(int i){
	setItem(0.0, i);

}

int Polynomial::getMaxDegree() {
	return last;
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
	setItem(h, n);
}




void Polynomial::setItem(double d,int i) {
	this->item[i] = d;
	this->deg = i;
}

std::ostream& operator << (std::ostream& os,const Polynomial &p) {
	os << "polynomial = ";
	for (int i = 0; i < p.deg; i++) {
		if (i == 0) {
			os << p.item[0];
		}
		else {
			os << "+" << p.item[i] << "^" << i;
		}
		
	}
	os << endl;
	return os;
}

int Polynomial::getDegree(bool b) {

	return 0;
}
