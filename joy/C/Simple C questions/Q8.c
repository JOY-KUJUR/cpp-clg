#include<stdio.h>
#include<conio.h>
int main(){
    float c,f;
    printf("Enter celsius:");
    scanf("%f",&c);
    f=((c*9)/5)+32;
    printf("\n Temprature in farhenheit is: %f",f);
    return 0;
}