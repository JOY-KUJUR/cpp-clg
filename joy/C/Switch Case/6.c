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
    int op,i,j=0;
    char r[20],g[20];
    printf("Enter String:");
    scanf("%s",&r);
    for(i=0;r[i]!='\0';i++)
    {
        if(vow(r[i])==1)
        {
            g[j]=r[i];
            j++;
        }
    }
    g[j]='\0';
    printf("\nString After Removing Vowels: \n%s",g);
    getch();
    return 0;
}

