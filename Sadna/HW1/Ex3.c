/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int* resizeArray(int* array,int n,int m);
int* multiplyMatrix(int *a,int *b,int m,int n,int p);

int main()
{
    int x[10][10] = {0};
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    
    int* ptra = &a[0][0];
    int* ptrb = &b[0][0];
    
    multiplyMatrix(ptra,ptrb,3,3,4);
    return 0;
}

int* multiplyMatrix(int *a,int *b,int m,int n,int p){
    int ans[2][2] = {0};
    
    int mn = (m > n) ? m : n;
    int mm = (n > p) ? n : p;
    
    int *ansptr = &ans[0][0];
    
    for(int i = 0;i < mn;i++){
        for(int j = 0;j < mm;j++){
            if(i > 2 || j > 2){
                ansptr = resizeArray(ansptr,i,j);
            }
            ans[i][j] = (a[i*m+j]) * (b[i*n+j]);
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
    return ansptr;
}

int* resizeArray(int* array,int n,int m){
    int ret[n][m] = {0};
    
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            ret[i][j] = array[i*n + j];
            printf("%d ",ret[i][j]);
        }
        printf("\n");
    }
    
    int* ptr = &ret[0][0];
    return ptr;
}
