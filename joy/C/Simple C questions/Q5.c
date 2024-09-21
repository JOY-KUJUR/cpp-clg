#include<stdio.h>
#include<conio.h>
int main(){
    int si,p,r,t;
    printf("Enter Principal, Rate of interest and amount of time: ");
    scanf("%d %d %d",&p,&r,&t);
    si=p*r*t/100;
    printf("The simple interest is: %d",si);
    return 0;
}