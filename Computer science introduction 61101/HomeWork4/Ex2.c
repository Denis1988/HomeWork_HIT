#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
void sortEx2(int* a,int n);
void swap(int *a, int *b);

void main() {

	int* a;
	int n;
	int index = 0;
	int tmp = 0;
	printf("Enter array size :");
	scanf("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	assert(a);
	for (int i = 0; i < n; i++) {
		printf("Enter next int to array : ");
		scanf("%d", a + i);
		printf("\n");
	}
	sortEx2(a,n);
	printf("Sorted array : ");
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}

void sortEx2(int* a,int n) {
	int right = 0, left = n;
	for (int i = 0; i < n / 2; i++) {
		for (int j = right; j < left - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(&a[j], &a[j + 1]);
			}
		for (int t = left - 1; t > right; t--) {
			if (a[t] < a[t-1]) {
				swap(&a[t], &a[t - 1]);
				}
			}
		}
	}
}

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
