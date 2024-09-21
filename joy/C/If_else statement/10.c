#include<stdio.h>
#include<conio.h>

void Days(int a)
{
    if(a==1|a==3|a==5|a==7|a==8|a==10|a==12){printf("31 Days.");}
    else if(a==4|a==6|a==9|a==11){printf("30 Days.");}
    else if(a==2){printf("28/29 Days.");}
    else{printf("<<<<<INVALID MONTH>>>>>>>>");}
}

int main()
{
    int n;
    printf("Enter the number of month:");
    scanf("%d",&n);
    Days(n);
    getch();
    return 0;
}