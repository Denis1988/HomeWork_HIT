#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
void sortEx1(int* a,int n);

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
	sortEx1(a,n);
	printf("Sorted array : ");
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}

void sortEx1(int* a,int n) {
	int index = 0;
	int indext = 0;
	int* tmp = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		if (a[i] % 3 == 0) {
			a[index] = a[i];
			index++;
		}
		else {
			tmp[indext] = a[i];
			indext++;
		}
	}
	for (int i = 0; i < indext; i++) {
		a[i+ index] = tmp[i];
	}
	free(tmp);
}
