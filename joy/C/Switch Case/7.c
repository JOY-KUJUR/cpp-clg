#include<stdio.h>
#include<conio.h>

int main()
{
    int month;
    printf("Enter number of the month:");
    scanf("%d",&month);
    switch (month)
    {
    case 1:
        printf("\n31 days");
        break;
    case 2:
        printf("\n28/29 days");
        break;
    case 3:
        printf("\n31 days");
        break;
    case 4:
        printf("\n30 days");
        break;
    case 5:
        printf("\n31 days");
        break;
    case 6:
        printf("\n30 days");
        break;
    case 7:
        printf("\n31 days");
        break;
    case 8:
        printf("\n31 days");
        break;
    case 9:
        printf("\n30 days");
        break;
    case 10:
        printf("\n31 days");
        break;
    case 11:
        printf("\n30 days");
        break;
    case 12:
        printf("\n31 days");
        break;
    default:
        printf("\nEnter values from 1 - to - 12");
        break;
    }
    getch();
    return 0;
}