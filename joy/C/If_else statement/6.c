#include<stdio.h>
#include<conio.h>

int main(){
    int a;
    printf("Enter Year:");
    scanf("%d",&a);
    if(a%4==0 && a%100!=0 || a%400==0)
    {
        printf("\nYear is a leap year");
    }else
    {
        printf("Year is not a leap year");
    }
    getch();
    return 0;
}