#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    
    for(int i = 0;i < 100;i++){
        for(int j = 0;j < 100;j++){
            if(((3 * i) + (5 * j)) == n){printf("(%d,%d)",i,j);}
            if(((3*i)>= n) || ((5*j)>= n)){break;}
        }
    }
}
