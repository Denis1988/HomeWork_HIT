#include <stdio.h>
int req(int n);
int main()
{
	int number = 0;
	printf("Enter the number : ");
	scanf("%d", &number);
	printf("Ans : %d", req(number));

	return 0;
}
int req(int n) {
	int static ans;
	int static count = 1;
	if (n > 0) {
		count *= 10;
		if (n % 10 < 9) {
			ans += ((n % 10) + 1)*count;
		}
		req(n / 10);
	}
	if (n == 0) {
		return ans / 10;
	}
}
