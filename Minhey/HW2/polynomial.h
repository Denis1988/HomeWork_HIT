#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
using namespace std;

class Polynomial {
private:
	double item[100] = {0};
	int deg = 0;
	
public:
	void setCoeff(int n,double h);
	Polynomial(double* item);
	Polynomial(double* item,int i);
	Polynomial(int i = 1);
	int getDegree(bool b);
	friend ostream& operator << (ostream& os,const Polynomial &p);
	void setItem(double d,int i);
	static int getMaxDegree();
	static const int last = 0;

};
#endif