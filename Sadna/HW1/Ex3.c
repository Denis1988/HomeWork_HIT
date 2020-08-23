#include <stdio.h>
#include <stdlib.h>
void multiplyMatrix(int *a,int *b,int m,int n,int p,int* ans);
void extener(int* a,int n,int m);

int main()
{
int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int b[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

int* ptra = &a;
int* ptrb = &b;
int* ans = (int*)malloc(2*2*sizeof(int));
multiplyMatrix(ptra,ptrb,3,3,4,ans);

printf("after extend\n");
for(int i = 0;i < 3 ;i++){
  for(int j = 0;j < 4;j++){
     printf("%d ",ans[i*2+j]);
  }
  printf("\n");
}

    return 0;
}

void extener(int* a,int n,int m){

int *nx = (int*)calloc((n+1)*(m+1),sizeof(int));

for(int i = 0;i < n ;i++){
  for(int j = 0;j < m;j++){
      nx[i*2+j] = a[i*2+j];
  }
}

a = nx;
free(nx);

}

void multiplyMatrix(int* a,int* b,int m,int n,int p,int* ans){
int mn = (m > n) ? m : n;
int mm = (n > p) ? n : p;

    for(int i = 0;i < mn;i++){
        for(int j = 0;j < mm;j++){
            if(i >= m-1 || j >= p-1){
                extener(ans,i+1,j+1);
            }
            if(i >= m-1){
                ans[i*mn + j] = 0*b[i*mn+j];
                break;
            }
            if(j >= p-1){
                ans[i*mn + j] = a[i*mn+j]*b[i*mn+j];
                break;
            }
            ans[i*mn + j] = a[i*mn+j]*b[i*mn+j];
            printf("%d ",ans[i*mn + j]);
        }
        printf("\n");
    }
    
}
