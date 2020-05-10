#include <stdio.h>
int req(int n);
int main()
{
    int number = 0;
    printf("Enter the numbers : \n");
	scanf("%d", &number);
    printf("Answer : %d",req(number));
}

int req(int n) {
	static int ans = 2;
	if (n < 10) {
		return ans;
	}
	int tmp = (n % 10);
	int tmp1 = ((n % 100) / 10);
	if (tmp > tmp1 ){
		if (ans == -1) {ans = 0;}
		else {ans = 1;}
	}
	if (tmp < tmp1) {
		if (ans == 1) {ans = 0;}
		else {ans = -1;}
	}
	req(n / 10);
}
