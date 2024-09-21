#include<stdio.h>
#include<conio.h>
int main()
{
    int cp,sp;
    printf("Enter Cost price:");
    scanf("%d",&cp);
    printf("\nEnter selling price:");
    scanf("%d",sp);
    if(cp<sp)
    {
        printf("\n PROFIT");
    }else if(sp<cp)
    {
        printf("\nLOSS");
    }
    getch();
    return 0;
}