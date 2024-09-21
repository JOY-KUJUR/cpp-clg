#include<stdio.h>
#include<conio.h>
int vow(char j)
{
    switch(j)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        return 0;
        default:
        return 1;
    }
}

int main()
{
    char ch;
    printf("Enter letter to check");
    scanf("%c",&ch);
    if(vow(ch)!=1)
    {
         printf("\nAlphabet is vowel");
    }else{printf("\nAlphabet is not a vowel");}
    getch();
    return 0;
}