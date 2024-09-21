#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
    printf("Enter two numbers to find maximum:");
    scanf("%d%d",&a,&b);
    switch(a>b)
    {
        case 0:
            printf("\n%d is maximum",b);
            break;
        case 1:
            printf("\n%d in maximum",a);
            break;

    }
    getch();
    return 0;
}