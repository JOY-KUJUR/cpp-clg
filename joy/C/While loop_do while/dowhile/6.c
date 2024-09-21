#include<stdio.h>
#include<conio.h>
int main()
{
    int num,rev=0,rem,temp;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
    do
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }while (temp>0);
    if(rev==num)
    {
        printf("Number is a palindrome");
    }else {printf("Number is not a palindrome");}
    getch();
    return 0;
}