#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    printf("enter the values of angles:");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b+c==180)
    {
        printf("Triangle is valid");
    }else{printf("Triangle is not valid");}
    getch();
    return 0;
    
}