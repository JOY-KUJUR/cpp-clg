#include<stdio.h>
#include<conio.h>

int main()
{
    int num,i;
    printf("Enter the number of the table you'd like to display:");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("\n%d x %d = %d",num,i,num*i);
    }
    getch();
    return 0;
}