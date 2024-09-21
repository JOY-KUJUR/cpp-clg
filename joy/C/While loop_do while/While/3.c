#include<stdio.h>
#include<conio.h>

int main()
{
    int a=0,i=1;
    while (i<=100)
    {
        a=a+i;
        i++;
    }
    printf("Sum of natural numbers till 100 are: %d",a);
    getch();
    return 0;
}