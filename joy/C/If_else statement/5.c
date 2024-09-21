#include<stdio.h>
#include<conio.h>

int main(){
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z')
    {
        printf("Character is Lowercase");
    }else if (ch>='A'&&ch<='Z')
    {
        printf("Character is Uppercase");
    }else if(ch>='0' && ch<='9')
    {
        printf("Character is a Digit");
    }else
    {
        printf("Character is a Special character");
    }
    getch();
    return 0;
}