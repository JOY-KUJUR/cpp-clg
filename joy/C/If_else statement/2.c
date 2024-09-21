#include<stdio.h>
#include<conio.h>

int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a<0){
        printf("number is negative");
    }else if (a>0)
    {
        printf("number is positive");
    }   
    getch();
    return 0;
}