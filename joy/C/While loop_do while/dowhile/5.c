#include<stdio.h>
#include<conio.h>
int main()
{
    int x, y, max;
    printf("Enter two positve integers:");
    scanf("%d %d",&x,&y);
    max = (x > y) ? x : y;
    do {
        if (max % x == 0 && max % y == 0) {
            printf("The LCM of %d and %d is %d.", x, y,
                   max);
            break;
        }
        ++max;
    }while (1);
    getch();
    return 0;
}