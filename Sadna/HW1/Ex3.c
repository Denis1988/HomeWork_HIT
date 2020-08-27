#include <stdio.h>
#include <stdlib.h>
struct ivar* ADD(struct ivar* head, int size);
struct ivar {
	struct natun* n;
	struct ivar* next;
	int size;
}ivar;

struct natun {
	int n;
	int j;
	int i;
};

int main()
{
	struct ivar* ans = (struct ivar*)malloc(sizeof(struct ivar));
	ans->n = (struct natun*)malloc(sizeof(struct natun*));
	ans->next = (struct ivar*)malloc(sizeof(struct ivar*));
	ans->size = 1;
//	ans = (struct ivar*)realloc(ans, sizeof(struct ivar*) * (1 + 1)+1);
//	ans[1].n = (struct natun*)malloc(sizeof(struct natun*));
//	ans[1].next = (struct ivar*)malloc(sizeof(struct ivar*));
//	ans[0].next = &ans[1];
	int a[20] = {	3,2,5,3,6,
					8,3,4,6,5,
					0,6,4,5,7,
					9,8,6,6,1 };

	printf("%d", ex3(a, 5, 3, &ans));
	return 0;
}
int ex3(int* m, int t, int r, struct ivar* ans) {
	int index = 0;
	for (int k = 0; k <= r; k++) {
		for (int l = 0; l < t; l++) {
			if ((k + l) == m[k*t + l]) {
				ans->n->n = m[k*t + l];
				ans->n->i = k+1;
				ans->n->j = l+1;
				ans->next = ADD(ans,++index);
				ans = &ans->next;
			}
		}
	}
	int p = 0;
	while (ans->next != NULL) {
		printf("ivar = %d,i = %d ,j = %d\n", ans->n->n, ans->n->i, ans->n->j);
	}
	return index;
}
struct ivar* ADD(struct ivar* head,int size){
	struct ivar* tmp = (struct ivar*)malloc(sizeof(struct ivar));
	tmp->n = (struct natun*)malloc(sizeof(struct natun*));
	tmp->next = (struct ivar*)malloc(sizeof(struct ivar*));
	return &tmp;
}
