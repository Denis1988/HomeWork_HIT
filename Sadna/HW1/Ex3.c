#include <stdio.h>
#include <stdlib.h>
void push(struct ivar* head, int size, struct natun* na);
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
	int a[20] = {	3,2,5,3,6,
					8,3,4,6,5,
					0,6,4,5,7,
					9,8,6,6,1 };

	printf("%d", exensionto3(a, 5, 3, &ans));
	return 0;
}
int exensionto3(int* m, int t, int r, struct ivar* ans) {
	struct natun* na = (struct natun*)malloc(sizeof(struct natun));
	struct ivar* temp;
	ans->n = NULL;
	ans->next = NULL;
	int index = 0;
	for (int k = 0; k <= r; k++) {
		for (int l = 0; l < t; l++) {
			if ((k + l) == m[k*t + l]) {
				na->n = m[k*t + l];
				na->i = k;
				na->j = l;
				index++;
				push(ans, index, na);
			}
		}
	}
	return index;
}
void push(struct ivar* head,int size,struct natun* na){
	struct ivar* tmp = head;
	while (tmp->next != NULL) {
		tmp = tmp->next;
	}
	tmp->next = (struct ivar*)malloc(sizeof(struct ivar));
	tmp->size = size;
	tmp->n = (struct natun*)malloc(sizeof(struct natun));
	tmp->n->i = na->i;
	tmp->n->j = na->j;
	tmp->n->n = na->n;
	tmp->next->next = NULL;
}
