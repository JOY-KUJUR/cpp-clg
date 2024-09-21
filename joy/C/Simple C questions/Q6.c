#include<stdio.h>
#include<conio.h>
int main(){
    int bs,hra,lc,gs;
    printf("Enter your base salary:");
    scanf("%d",&bs);
    hra=bs*10/100;
    lc=bs*5/100;
    gs=bs+hra+lc;
    printf("\nYour Gross salary is: %d",gs);
    return 0;
}