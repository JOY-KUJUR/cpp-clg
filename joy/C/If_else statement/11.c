#include<stdio.h>
#include<conio.h>

int main()
{
    int amt;
    int n500,n200,n100,n50,n20,n10,n5,n2,n1;
    n500=n200=n100=n50=n20=n10=n2=n5=n1=0;

    printf("Enter amount:");
    scanf("%d",&amt);

    if(amt>=500)
    {
        n500=amt/500;
        amt-=n500*500;
    }
    if(amt>=200)
    {
        n200=amt/200;
        amt-=n200*200;
    }
    if(amt>=100)
    {
        n100=amt/100;
        amt-=n100*100;
    }
    if(amt>=50)
    {
        n50=amt/50;
        amt-=n50*50;
    }
    if(amt>=20)
    {
        n20=amt/20;
        amt-=n20*20;
    }
    if(amt>=10)
    {
        n10=amt/10;
        amt-=n10*10;
    }
    if(amt>=5)
    {
        n5=amt/5;
        amt-=n5*5;
    }
    if(amt>=2)
    {
        n2=amt/2;
        amt-=n2*2;
    }
    if(amt>=1)
    {
        n1=amt;
    }

    printf("Total number of notes:\n");
    printf("500 = %d\n",n500);
    printf("200 = %d\n",n200);
    printf("100 = %d\n",n100);
    printf("50 = %d\n",n50);
    printf("20 = %d\n",n20);
    printf("10 = %d\n",n10);
    printf("5 = %d\n",n5);
    printf("2 = %d\n",n2);
    printf("1 = %d\n",n1);

    return 0;

}