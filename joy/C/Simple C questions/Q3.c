#include<stdio.h>
#include<conio.h>
int main(){
    int b,h,a;
    printf("Enter base:");
    scanf("%d",&b);
    printf("Enter height:");
    scanf("%d",&h);
    a=b*h*0.5;
    printf("The area of triangle of with base %d and height %d is %d",b,h,a);
    return 0;
}