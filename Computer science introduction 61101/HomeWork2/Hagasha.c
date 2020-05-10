#include <stdio.h>
void Ex1();
void Ex2();
void Ex3();
void Ex4();
void Ex5();

int main(){
	int select = 0, i, all_Ex_in_loop = 0;
	printf("Run menu once or cyclically?\n(Once - enter 0, cyclically - enter other number) ");
		if (scanf("%d", &all_Ex_in_loop) == 1)
			do
			{
				for (i = 1; i <= 5; i++)
					printf("Ex%d--->%d\n", i, i);
				printf("EXIT-->0\n");
				do {
					select = 0;
					printf("please select 1-5 : ");
					scanf("%d", &select);
				} while ((select < 1) || (select > 5));
				switch (select)
				{
				case 1: Ex1(); break;
				case 2: Ex2(); break;
				case 3: Ex3(); break;
				case 4: Ex4(); break;
				case 5: Ex5(); break;
				}
			} while (all_Ex_in_loop && select);
			return 0;
}

////////////////////////////////////
int reqursionEx1(int n, int sum);
void Ex1(){
	int number = 0, sum = 0;
	printf("Ex1.\nEnter the numbers : \n");
	printf("Answer : %d", reqursionEx1(number, sum));
	return;
}

int reqursionEx1(int n, int sum) {
	if (n == -1) {
		return sum;
	}
	scanf("%d", &n);
	if (n % 2) {
		reqursionEx1(n, sum);
	}
	else {
		reqursionEx1(n, sum + n);
	}
}

//////////////////////////////////////
int reqursionEx2(int n);
void Ex2(){
	int number = 0;
	printf("Ex2.\nEnter the numbers : ");
	scanf("%d", &number);
	printf("Answer : %d", reqursionEx2(number));
	return;
}

int reqursionEx2(int n) {
	static int ans = 2;
	if (n < 10) {
		return ans;
	}
	int tmp = (n % 10);
	int tmp1 = ((n % 100) / 10);
	if (tmp > tmp1) {
		if (ans == -1) { ans = 0; }
		else { ans = 1; }
	}
	if (tmp < tmp1) {
		if (ans == 1) { ans = 0; }
		else { ans = -1; }
	}
	reqursionEx2(n / 10);
}

/////////////////////////////////////////

int reqursionEx3(int n);
void Ex3(){
	int number = 0;
	printf("Ex3.\nEnter the number : ");
	scanf("%d", &number);
	printf("Ans : %d", reqursionEx3(number));
	return;
}
int reqursionEx3(int n) {
	int static ans;
	int static count = 1;
	if (n > 0) {
		count *= 10;
		if (n % 10 < 9) {
			ans += ((n % 10) + 1)*count;
		}
		reqursionEx3(n / 10);
	}
	if (n == 0) {
		return ans / 10;
	}
}

///////////////////////////////////////////

int reqursionEx4(int n);
void Ex4(){
	int number = 0;
	printf("Ex4.\nEnter the number : ");
	scanf("%d", &number);
	printf("Ans : %d", reqursionEx4(number));

	return ;
}
int reqursionEx4(int n) {
	int static ans;
	if (n > 0) {
		int tmp = ((n % 100) / 10);
		int tmp1 = (n % 10);
		if ((tmp < tmp1) && ((tmp + tmp1) > ans)) {
			ans = tmp + tmp1;
		}
		reqursionEx4(n / 10);
	}
	if (n == 0) {
		return ans;
	}
}

//////////////////////////////////////////

void reqursionEx5(int n);
void Ex5(){
	int number = 0;
	printf("Ex5.\nEnter the numbers : \n");
	scanf("%d", &number);
	reqursionEx5(number);
	return;
}

void reqursionEx5(int n) {
	static int k = 2;
	if (n == 1) {
		return;
	}
	if ((n%k) == 0) {
		printf("%d ", k);
		reqursionEx5(n / k);
	}
	else {
		k++;
		reqursionEx5(n);
	}
}
