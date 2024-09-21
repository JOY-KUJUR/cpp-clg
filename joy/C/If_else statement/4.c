#include<stdio.h>
#include<conio.h>

int main(){
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z' || ch>='A'&&ch<='Z')
    {
        printf("Character is an Alphabet");
    }else
    {
        printf("Character is not an Alphabet");
    }
    getch();
    return 0;
}