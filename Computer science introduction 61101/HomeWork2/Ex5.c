#include <stdio.h>
void req(int n);
int main()
{
    int number = 0;
    printf("Enter the numbers : \n");
	scanf("%d", &number);
	req(number);
}

void req(int n) {
	static int k = 2;
	if (n == 1) {
		return;
	}
	if ((n%k) == 0) {
		printf("%d ", k);
		req(n / k);
	}
	else {
		k++;
		req(n);
	}
}
