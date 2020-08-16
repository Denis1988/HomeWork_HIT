#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include <stdlib.h>
#include <iostream>
using namespace std;

class Polynomial {
private:
	double* item[100];
	int deg;

public:
	void setCoeff(int n,double h);
	Polynomial(double* item);
	Polynomial(double* item,int i);
	Polynomial(int i = 0);
	int getDegree(bool b);
	Polynomial operator << (Polynomial p);
	void setItem(double d,int i);
	static int getMaxDegree();
};
#endif