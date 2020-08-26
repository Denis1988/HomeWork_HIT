#include <stdio.h>
#include <stdlib.h>
void multiplyMatrix(int *a, int *b, int m, int n, int p, int* ans);

int main()
{
	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int b[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };


	int* ans = (int*)malloc(2*2 * sizeof(int)+1);
	multiplyMatrix(a, b, 3, 3, 4, ans);

	printf("after extend\n");
	for (int i = 0; i < 3*4; i++) {
		printf("%d ", ans[i]);
	}

	return 0;
}


void multiplyMatrix(int* a, int* b, int m, int n, int p, int* ans) {
	int mn = (m > n) ? m : n;
	int mp = (n > p) ? n : p;

	for (int i = 0; i < mn; i++) {
		for (int j = 0; j < mp; j++) {
			if (i >= m - 1 || j >= p - 1) {
				ans = (int)realloc(ans, (n + 1)*(m + 1) * sizeof(int));
			}
			if (i >= mp) {
				ans[i * mp + j] = a[i*mn + j] * 0;
			}
			if (j >= mn) {
				ans[i * mp + j] = 0 * b[i*mp + j];
			}
			else {
				ans[i * mp + j] = a[i*mn + j] * b[i*mp + j];
			}
			printf("%d ", ans[i*mp + j]);
		}
		printf("\n");
	}
}
