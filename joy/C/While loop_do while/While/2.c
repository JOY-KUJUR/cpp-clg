#include<stdio.h>
#include<conio.h>

int main()
{
    int n,r,sum=0,temp;
    printf("Enter number");
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        r=temp%10;
        sum=sum+(r*r*r);
        temp=temp/10;
    }
    if (n==sum)
    {
        printf("It is an armstrong number");
    }else{
        printf("It is not an armstrong number");
    }
    getch();
    return 0;
}