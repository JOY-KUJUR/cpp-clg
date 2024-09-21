#include<stdio.h>
#include<conio.h>
int main(){
    char fname[20],mname[20],lname[20];
    printf("Enter full name:");
    scanf("%s %s %s",&fname,&mname,&lname);
    printf("\n%c . %c . %s",fname[0],mname[0],lname);
    return 0;
}