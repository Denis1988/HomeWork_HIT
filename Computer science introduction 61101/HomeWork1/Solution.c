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
	int n = 0, tmp = 0,sum = 0,max = 0,min = 0;
	printf("Please enter number of numbers to be checked : ");
	scanf("%d", &n);
    tmp = n;
	printf("Enter numbers to be checked one by one\n");
	int i = 0;
	for (i; i < n; i++) {
	    printf("Enter number %d :",i+1);
		scanf("%d", &tmp);
		ifLessThanZero(tmp);
		if (i == 0)
			min = max = tmp;
		if (tmp > max)
			max = tmp;
		if (tmp < min)
				min = tmp;
		sum = sum + tmp;
	}

	printf("Sum of numbers : %d\n", sum);
	printf("Minimal number : %d\n", min);
	printf("Maximal number : %d\n", max);
}

int ifLessThanZero(int t) {
    int newNumber = t;
	while (newNumber < 0) {
	    printf("Re-enter number(number is negative): ");
	    scanf("%d", &newNumber);
		}
		return newNumber;
}
//*********************************************

//**********************************************
void Ex4() {
	int num = 0, digits = 0, saveNum,sum;
	printf("Please enter number to be checked : \n");
	scanf("%d", &num);
	saveNum = num;
	
	while(saveNum != 0){
	    saveNum = saveNum/10;
	    digits++;
	}
	int ans = calculation(num,digits);
	if(ans)printf("Number is special!");
	if(!ans)printf("Number not special.");
}
int calculation(int num,int digits){
    int halfDigitsM10 = 1,sum;
	if(!digits%2){
	    printf("Can't be calculated");
	    return 0;
	}
	
	for (i = 1; i <= digits / 2; i++) halfDigitsM10 *= 10;
	sum = (num / halfDigitsM10 + num % halfDigitsM10);

	return (sum * sum == num) ? 1 : 0;
}
//*********************************************

//**********************************************
void calculationEx5(int num);
void Ex5() {
	int num, n = 0, comp = 1;
	printf("Enter number to be completed : \n");
	scanf("%d", &num);
	calculation(num);
}
void calculationEx5(int num){
	int saveNum = num;
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
void calculationEx6(int x,int n);

void Ex6() {
	int x = 0, n = 0;
	printf("Please enter X :\n");
	scanf("%d", &x);
	printf("Please enter N : \n");
	scanf("%d", &n);
	calculationEx6(x,n)
}
void Ex6() {
	int x = 0, n = 0;
	printf("Please enter X :\n");
	scanf("%d", &x);
	printf("Please enter N : \n");
	scanf("%d", &n);
	calculationEx6(x,n);
	//printf("fac %d",factorial(5));
    }
    
void calculationEx6(int x,int n){
	double s = 0;
	int turns = 1, n1 = 1;
	//n=0
	s = (x - 1);
	turns += 2;
	n1++;

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
	int ans = 1,i = 1;
	for (i = 1; i <= f; ++i) {
	    ans *= i;
	}
	return ans;
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
