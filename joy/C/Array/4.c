#include<stdio.h>
#include<conio.h>
int main()
{
    char ch[]="I AM AN IDIOT";
    char c='A';
    int i=0;
    printf("Write your name:\n\n");
    while(c){
        c=getch();
        printf("%c\a",ch[i]);
        i++;
        if(i==14){
            printf(" ");
            i=0;
        }
    }
    return 0;    
}