#include <stdio.h>

int main(){
    int n,q,w,e,r,t,y,tmp;
    printf("Please enter number of numbers to be checked(for this moment 6 is maximum) : ");
    scanf("%d",&n);
    
    printf("Enter numbers to be checked one by one : ");
    
    for(int i = 1; i < n;i++){
        switch i{
            case 1:
            scanf("%d",&tmp);
            if(ifLessThanZero(tmp))
            break;
            case 2:
            scanf("%d",&tmp);
            break;
            case 3:
            scanf("%d",&tmp);
            break;
            case 4:
            scanf("%d",&tmp);
            break;
            case 5:
            scanf("%d",&tmp);
            break;
            case 6:
            scanf("%d",&tmp);
            break;
        }
    }
    int min = 
    
}

int ifLessThanZero(int t){
    if t < 0{return 0;}
    else{return 1;}
}
