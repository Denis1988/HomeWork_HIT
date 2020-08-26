/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
struct ivar{
    struct natun* n;
    struct ivar* next;
}ivar;

struct natun{
    int n;
    int j;
    int i;
};

int main()
{
    struct ivar *ans[2];
//    ans = (struct ivar**)malloc(sizeof(struct ivar*)*1);
//    ans[0]->n = (struct natun*)malloc(sizeof(struct natun*));
//    ans[0]->next = (struct ivar*)malloc(sizeof(struct ivar*));
    printf("n = %d i = %d j = %d",ans[0]->n->n,ans[0]->n->i,ans[0]->n->j);
    int a[20] = {   3,2,5,3,6,
                    8,3,4,6,5,
                    0,6,4,5,7,
                    9,8,6,6,1};
    
    printf("%d",ex3(a,5,3,&ans));
    return 0;
}
int ex3(int* m,int t,int r,struct ivar** ans){
     int index = 0;
     for(int k = 0;k <= r;k++){
         for(int l = 0;l < t;l++){
             if((k+l) == m[k*t+l]){
                 ans[index]->n->n = m[k*t+l];
                 ans[index]->n->i = k;
                 ans[index]->n->j = l;
                 index++;
                 ans = realloc(ans,sizeof(ivar)*index);
                 ans[index-1]->next = ans[index];
             }
         }
     }
     int p = 0;
     while(ans[p]->next != NULL){
         printf("ivar = %d,i = %d ,j = %d\n",ans[p]->n->n,ans[p]->n->i,ans[p]->n->j);
     }
     return index;
 }
