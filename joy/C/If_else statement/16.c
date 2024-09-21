#include<stdio.h>
#include<conio.h>

int main(){
    int a;
    printf("Enter an integer:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("\nNumber is even.");
    }else
    {
        printf("\nNumber is odd.");
    }
    getch();
    return 0;
}