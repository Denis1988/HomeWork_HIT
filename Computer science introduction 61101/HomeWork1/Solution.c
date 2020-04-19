#include  <stdio.h>
void Ex1();
void Ex2();
void Ex3();
void Ex4();
void Ex5();
void Ex6();

int main() {
	int select = 0, i, all_Ex_in_loop = 0;
	printf("Run menu once or cyclically?\n(Once - enter 0, cyclically - enter other number) ");

	if (scanf("%d", &all_Ex_in_loop) == 1)
		do {
			for (i = 1; i <= 6; i++)
				printf("Ex%d--->%d\n", i, i);
			printf("EXIT-->0\n");
			do {
				select = 0;
				printf("please select 0-6 : ");
				scanf("%d", &select);
			}

			while ((select < 0) || (select > 6));
			switch (select) {
			case 1: Ex1(); break;
			case 2: Ex2(); break;
			case 3: Ex3(); break;
			case 4: Ex4(); break;
			case 5: Ex5(); break;
			case 6: Ex6(); break;
			}
		} while (all_Ex_in_loop && select);
		return 0;
}

//**********************************************
void Ex1()
{
	int countOfOddnumber = 0, n = 0;
	printf("Enter the number to check odd numbers : \n");
	scanf("%d", &n);
	while (n > 0) {
		if (!((n % 10) % 2)) {
			countOfOddnumber++;
		}
		n = (n / 10);
	}
	printf("Number of odd numbers : %d\n", countOfOddnumber);
}
//*********************************************

//**********************************************
void Ex2() {
	int n;
	printf("Enter number and I will find solution(3x+5y=n)\n");
	scanf("%d", &n);
	if (n < 8) { printf("Number is too small"); return; }
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (((3 * i) + (5 * j)) == n) { printf("Answer : (%d,%d)\n", i, j); }
			if (((3 * i) >= n) || ((5 * j) >= n)) { break; }
		}
	}
}
//*********************************************

//**********************************************
int ifLessThanZero(int t);

void Ex3() {
	int n = 0, q = 0, w = 0, e = 0, r = 0, t = 0, y = 0, tmp = 0;
	printf("Please enter number of numbers to be checked(for this moment 6 is maximum) : \n");
	scanf("%d", &n);

	printf("Enter numbers to be checked one by one : \n");
	int i = 1;
	for (i; i <= n; i++) {
		switch (i) {
		case 1:
			scanf("%d", &tmp);
			q = ifLessThanZero(tmp);
			break;
		case 2:
			scanf("%d", &tmp);
			w = ifLessThanZero(tmp);
			break;
		case 3:
			scanf("%d", &tmp);
			e = ifLessThanZero(tmp);
			break;
		case 4:
			scanf("%d", &tmp);
			r = ifLessThanZero(tmp);
			break;
		case 5:
			scanf("%d", &tmp);
			t = ifLessThanZero(tmp);
			break;
		case 6:
			scanf("%d", &tmp);
			y = ifLessThanZero(tmp);
			break;
		}
	}
	int min = 0;
	switch (n) {
	case 1:
		min = q;
		break;
	case 2:
		min = q < w ? q : w;
		break;
	case 3:
		min = q < w ? q : w < e ? w : e;
		break;
	case 4:
		min = q < w ? q : w < e ? w : e < r ? e : r;
		break;
	case 5:
		min = q < w ? q : w < e ? w : e < r ? e : r < t ? r : t;
		break;
	case 6:
		min = q < w ? q : w < e ? w : e < r ? e : r < t ? r : t < y ? t : y;
		break;
	}

	int max = q > w ? q : w > e ? w : e > r ? e : r > t ? r : t > y ? t : y;

	printf("Sum of numbers : %d\n", q + w + e + r + t + y);
	printf("Minimal number : %d\n", min);
	printf("Maximal number : %d\n", max);
}

int ifLessThanZero(int t) {
	int newNumber = t;
	if (t <= 0) {
		while (newNumber <= 0) {
			printf("Re-enter number(number is negative)\n");
			scanf("%d", &newNumber);
		}
	}
	if (t > 0) {
		return newNumber;
	}
}
//*********************************************

//**********************************************
void Ex4() {
	int num = 0, q, w, e, r, saveNum;
	printf("Please enter number to be checked : \n");
	scanf("%d", &num);
	saveNum = num;

	if (num > 10000) {
		while (num < 10000) {
			printf("ERORR.Please re-enter number contains less than 4 simbols\n");
			scanf("%d", &num);
		}
	}
	r = num % 10;
	num = num / 10;
	e = num % 10;
	num = num / 10;
	w = num % 10;
	num = num / 10;
	q = num;

	int sum = ((q * 10) + w) + ((e * 10) + r);
	printf("Add two numbers %d%d + %d%d = %d\n", q, w, e, r, sum);
	printf("Sum of two number squared %d\n", sum*sum);

	if (sum*sum == saveNum) {
		return 1;
	}
	else {
		return 0;
	}
}
//*********************************************

//**********************************************
void Ex5() {
	int num, n = 0, saveNum = 0, comp = 1;
	printf("Enter number to be completed : \n");
	scanf("%d", &num);
	saveNum = num;

	while (num != 0) {
		num = num / 10;
		n++;
	}
	while (n != 0) {
		comp = comp * 10;
		n--;
	}
	printf("For complete the number %d you need to add %d\n", saveNum, (comp - 1) - saveNum);
}
//*********************************************

//**********************************************
int factorial(int f);
int power(int num, int pow);

void Ex6() {
	int x = 0, n = 0, turns = 1;
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

	while (turns < t + 1)
	{
		double s1 = (power((x - 1), turns));
		double s2 = (factorial(turns) * (n1++));
		s += s1 / s2;
		turns += 2;
	}

	printf("Anwer of funtcion : %f\n", s);
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
//*********************************************
