#include  <stdio.h>
void Ex1();
void Ex2();
void Ex3();
void Ex4();
void Ex5();
void Ex6();

int main(){
    int select=0, i, all_Ex_in_loop=0;
    printf("Run menu once or cyclically?\n(Once - enter 0, cyclically - enter other number) ");
    
    if (scanf("%d", &all_Ex_in_loop) == 1)
    do{
        for (i=1; i<=6; i++)
        printf("Ex%d--->%d\n", i, i);
        printf("EXIT-->0\n");
        do {
            select=0;
            printf("please select 0-6 : ");
            scanf("%d",&select);
          }
        
        while ((select<0)||(select>6));
        switch (select){
            case 1: Ex1(); break;
            case 2: Ex2(); break;
            case 3: Ex3(); break;
            case 4: Ex4(); break;
            case 5: Ex5(); break;
            case 6: Ex6(); break;
        }
    } 
    while (all_Ex_in_loop && select);
    return 0;
}
