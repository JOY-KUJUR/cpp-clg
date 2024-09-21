#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("Enter an integer:");
    scanf("%d",&a);
    if(a%55==0){
        printf("\nNumber is divisble by 5 and 11");
    }else if(a%5==0 && a%11!=0){
        printf("\nNumber is divisible by 5 but not 11");
    }else if(a%11==0 && a%5!=0){
        printf("\nNumber is divisible by 11 but not 5");
    }else{
        printf("\nNumber is not divisible by 5 or 11");
    }
    getch();
    return 0;
}