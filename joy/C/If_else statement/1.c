#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("\nThe greatest number is %d",a);
    }else if(b>a && b>c){
        printf("\nThe greatest number is %d",b);
    }else if(c>a && c>b){
        printf("\nThe greatest number is %d",c);
    }else{
        printf("\nEither all or few values entered are the same");
    }
    getch();
    return 0;
}