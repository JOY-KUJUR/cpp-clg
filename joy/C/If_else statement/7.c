#include<stdio.h>
#include<conio.h>
int main()
{
    int dd,mm,yy;
    printf("Enter the date in dd/mm/yy format:");
    scanf("%d / %d / %d",&dd,&mm,&yy);

    if(yy>=1900 && yy<=9999)
    {
        if(mm>=1 && mm<=12)
        {
            if(dd>=1 && dd<=31)
            {
                printf("Date is valid");
            }else{printf("Date is Invalid");}
        }else{printf("Date is Invalid");}
    }else{printf("Date is Invalid");}
    getch();
    return 0;
}
