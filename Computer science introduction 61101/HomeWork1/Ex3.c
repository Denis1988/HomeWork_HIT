#include <stdio.h>

int ifLessThanZero(int t);

int main() {
	int n = 0, q = 0, w = 0, e = 0, r = 0, t = 0, y = 0, tmp = 0;
	printf("Please enter number of numbers to be checked(for this moment 6 is maximum) : \n");
	scanf("%d", &n);

	printf("Enter numbers to be checked one by one : \n");
int i = 1;
	for (i; i <= n; i++) {
		switch (i){
			case 1:
			scanf("%d",&tmp);
			q = ifLessThanZero(tmp);
			break;
			case 2:
			scanf("%d",&tmp);
			w = ifLessThanZero(tmp);
			break;
			case 3:
			scanf("%d",&tmp);
			e = ifLessThanZero(tmp);
			break;
			case 4:
			scanf("%d",&tmp);
			r = ifLessThanZero(tmp);
			break;
			case 5:
			scanf("%d",&tmp);
			t = ifLessThanZero(tmp);
			break;
			case 6:
			scanf("%d",&tmp);
			y = ifLessThanZero(tmp);
			break;
		}
	}
	int min = 0;
		switch (n){
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
	printf("Minimal number : %d\n",min);
	printf("Maximal number : %d\n", max);
}

int ifLessThanZero(int t) {
	int newNumber = t;
	if (t <= 0 ){
		while (newNumber <= 0) {
			printf("Re-enter number(number is negative)\n");
			scanf("%d",&newNumber);
		}
	}
	if (t > 0) {
		return newNumber;
	}
}
