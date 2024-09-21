#include<stdio.h>
#include<conio.h>
int main()
{
    int num,rev=0,rem,temp;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
    while (temp>0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if(rev==num)
    {
        printf("Number is a palindrome");
    }else {printf("Number is not a palindrome");}
    getch();
    return 0;
}