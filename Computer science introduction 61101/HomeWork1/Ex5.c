#include <stdio.h>

int main() {
	int num,n = 0,saveNum = 0,comp = 1;
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
	printf("For complete the number %d you need to add %d", saveNum, (comp - 1) - saveNum);
}
