#include <stdio.h>

int factorial(int f);
int power(int num, int pow);

int main() {
	int x = 0, n = 0,turns = 1;
	double s = 0;
	printf("Please enter X :\n");
	scanf("%d", &x);
	printf("Please enter N : \n");
	scanf("%d", &n);
	int n1 = n;

	//n=0
	s = (x - 1);
	turns += 2;

	//end point
	int t = ((2 * n) + 1);

	while (turns < t+1)
	{
		double s1 = (power((x - 1), turns));
		double s2 = (factorial(turns) * (n1++));
		s += s1 / s2;
		turns += 2;
	}

	printf("Anwer of funtcion : %f", s);
}

int factorial(int f) {
	int r = 1;
	while (f != 1) {
		r = r * f;
		f--;
	}
	return r;
}

int power(int num, int pow) {
	int ret = num;

	while (pow != 1) {
		ret = ret * num;
		pow--;
	}
	return ret;
}
