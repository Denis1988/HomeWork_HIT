#include  <stdio.h>

int main(void)
{
    int countOfOddnumber = 0,n = 0;
    scanf("%d",&n);
    while(n > 0){
        if(!((n % 10) % 2)){
            countOfOddnumber++;
        }
        n = (n/10);
    }
    printf("%d",countOfOddnumber);
}
