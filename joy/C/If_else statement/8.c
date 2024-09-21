#include<stdio.h>
#include<conio.h>

int check(int a)
{
    if(a>18 && a<110)
    {
        printf("You can vote.");
    }else{printf("You cannot vote.");}
    return 0;
}

int main()
{
    int x;
    printf("Enter your age:");
    scanf("%d",&x);
    check(x);
    getch();
    return 0;
}