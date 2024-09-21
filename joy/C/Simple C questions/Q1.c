#include<stdio.h>
#include<conio.h>

int main(){
    int r;
    float c,a;
    printf("Enter radius:");
    scanf("%d",&r);
    a=3.14*r*r;
    c=2*3.14*r;
    printf("\nThe circumference is: %f",c);
    printf("\nThe area is: %f",a);
    return 0;
}