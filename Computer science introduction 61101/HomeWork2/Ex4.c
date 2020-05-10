#include <stdio.h>
int req(int n);
int main()
{
    int number = 0;
    printf("Enter the number : ");
    scanf("%d",&number);
    printf("Ans : %d",req(number));

    return 0;
}
int req(int n){
    int static ans;
    if(n > 0){
        int tmp = ((n%100)/10);
        int tmp1 = (n%10);
        if((tmp < tmp1) && ((tmp + tmp1) > ans)){
            ans = tmp + tmp1;
        }
        req(n/10);
    }
    if(n == 0){
        return ans;
    }
}
