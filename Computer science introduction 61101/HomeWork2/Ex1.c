#include <stdio.h>
int req(int n,int sum);
int main()
{
    int number = 0,sum = 0;
    printf("Enter the numbers : \n");
    printf("Answer : %d",req(number,sum));
}

int req(int n,int sum){
    if(n == -1){
        return sum;
    }
    scanf("%d",&n);
    if(n%2){
        req(n,sum);
    }
    else{
        req(n,sum+n);
    }
}
