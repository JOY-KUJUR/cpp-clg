#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    printf("Enter the day of the week:(1-7)");
    scanf("%d",&a);
    if(a==1){
        printf("Monday");
    }else if(a==2){
        printf("Tuesday");
    }else if(a==3){
        printf("Wednesday");
    }else if(a==4){
        printf("Thursday");
    }else if(a==5){
        printf("Friday");
    }else if(a==6){
        printf("Saturday");
    }else if(a==7){
        printf("Sunday");
    }else{
        printf("Not a day in the week.");
    }
    getch();
    return 0;
}