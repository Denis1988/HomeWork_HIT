
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
typedef enum { false, true } bool;
void funcEx3(char* a, char* b, char* c);
void sortEx1(int* a, int n);
void sortEx2(int* a, int n);
void swap(int *a, int *b);
void Ex1();
void Ex2();
void Ex3();
int main()
{
	int select = 0, i, all_Ex_in_loop = 0;
	printf("Run menu once or cyclically?\n(Once - enter 0, cyclically - enter other number) ");
	if (scanf_s("%d", &all_Ex_in_loop) == 1)
		do
		{
			for (i = 1; i <= 5; i++)
				printf("Ex%d--->%d\n", i, i);
			printf("EXIT-->0\n");
			do {
				select = 0;
				printf("please select 1-5 : ");
				scanf_s("%d", &select);
			} while ((select < 1) || (select > 5));
			switch (select)
			{
			case 1: Ex1(); break;
			case 2: Ex2(); break;
			case 3: Ex3(); break;
			}
		} while (all_Ex_in_loop && select);
		return 0;
}

//---------------------------------------------------------------------------
void Ex1() {

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
	sortEx1(a, n);
	printf("Sorted array : ");
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}

void sortEx1(int* a, int n) {
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
		a[i + index] = tmp[i];
	}
	free(tmp);
}
//---------------------------------------------------------------------------
void Ex2() {

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
	sortEx2(a, n);
	printf("Sorted array : ");
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}

void sortEx2(int* a, int n) {
	int right = 0, left = n;
	for (int i = 0; i < n / 2; i++) {
		for (int j = right; j < left - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(&a[j], &a[j + 1]);
			}
			for (int t = left - 1; t > right; t--) {
				if (a[t] < a[t - 1]) {
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
//---------------------------------------------------------------------------
//doenst work well
void Ex3() {

	char* a = "aaxbb";
	char* b = "abaaz";
	char ans[20] = "";
	funcEx3(a, b, ans);
	printf("first char array : %s\n second char array : %s\n ans : %s", a, b, ans);
}

void funcEx3(char* a, char* b, char* c) {
	int s1 = 0, s2 = 0, i = 0;
	bool goit = false;
	while (a[i] != '\0') {
		i++;
	}
	s1 = i;
	i = 0;
	while (b[i] != '\0') {
		i++;
	}
	s2 = i;
	i = 0;
	for (int j = 0; j < s1; j++) {
		for (int k = 0; k < s2; k++) {
			if (a[j] == b[k]) {
				for (int l = 0; l <= i; l++) {
					if (a[j] == c[l] && c[l] != '\0') {
						goit = false;
					}
					else {
						goit = true;
						break;
					}
				}

				if (goit == true) {
					c[i] = a[j];
					i++;
					goit = false;
				}
			}
		}
	}
	c[++i] = '\0';
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
