#include<stdio.h>
#include<conio.h>
int main()
{
    int cp,sp,d;
    printf("Enter Cost price:");
    scanf("%d",&cp);
    printf("\nEnter selling price:");
    scanf("%d",&sp);
    if(cp<sp){
        d=sp-cp;
        printf("\nPROFIT %d",d);
    }else if(cp>sp){
        d=cp-sp;
        printf("\nLOSS %d",d);
    }
    getch();
    return 0;
}