#include<stdio.h>
#include<conio.h>
int main(){
    float s1,s2,s3,s4,s5,sum,perc;
    printf("Enter the values for the subjects:");
    scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
    sum=s1+s2+s3+s4+s5;
    perc=sum/500*100;
    printf("\npercentage: %f",perc); 
    return 0;
}