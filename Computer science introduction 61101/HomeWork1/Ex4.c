#include <stdio.h>

int main() {
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
