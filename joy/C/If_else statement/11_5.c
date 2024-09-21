#include<stdio.h>
#include<conio.h>

int main()
{
    int notes[9]={500,200,100,50,20,10,5,2,1};
    int amt,temp;
    printf("Enter Amount:");
    scanf("%d",&amt);
    temp=amt;
    for(int i=0;i<9;i++)
    {
        printf("\n%d notes is: %d",notes[i],temp/notes[i]);
        temp=temp%notes[i];
    }
    getch();
    return 0;

}