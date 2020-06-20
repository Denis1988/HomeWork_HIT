#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
typedef enum { false, true } bool;
void funcEx3(char* a, char* b, char* c);


void main() {

	char* a = "aaxbb";
	char* b = "abaaz";
	char ans[20] = "";
	funcEx3(a, b, ans);
	printf("first char array : %s\n second char array : %s\n ans : %s", a, b,ans);
}

void funcEx3(char* a, char* b,char* c) {
	int s1 = 0, s2 = 0,i=0;
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
					else  {
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
