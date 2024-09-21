#include<stdio.h>
#include<conio.h>

int main()
{
    int n,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    do
    {
        n=n/10;
        count++;
    }while(n!=0);
    printf("\nThe number of digits in an integer is: %d",count);
    getch();
    return 0;
}