#include<stdio.h>
#include<conio.h> 
int main(){
    int num,rev=0,r;
    printf("Enter number:");
    scanf("%d",&num);
    do{
        r=num%10;
        rev=rev*10+r;
        num/=10;
    }while(num!=0);
    printf("The number in reverse is:%d",rev);
    return 0;
}