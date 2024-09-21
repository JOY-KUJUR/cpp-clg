#include<stdio.h>
#include<conio.h>

int main()
{
    int a=0,i=1;
    do
    {
        a=a+i;
        i++;
    }while (i<=100);
    printf("Sum of natual numbers till 100 are: %d",a);
    getch();
    return 0;
}