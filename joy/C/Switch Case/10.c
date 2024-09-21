#include<stdio.h>
#include<conio.h>

int eo(int a)
{
    switch (a%2==0)
    {
    case 0:
        printf("\nNumber is odd");
        break;
    case 1:
        printf("\nNumber is even");
        break;
    }
}

int main()
{
    int bruh;
    printf("Enter Number:");
    scanf("%d",&bruh);
    eo(bruh);
    getch();
    return 0;
}