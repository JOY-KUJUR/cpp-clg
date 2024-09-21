#include<stdio.h>
#include<conio.h>

int main()
{
    int perc,temp;
    printf("Enter your percentage:");
    scanf("%d",&perc);
    temp=perc/10;
    if(temp>0){
        switch (temp)
        {
        case 10:
            printf("Grade O");
            break;
        case 9:
            printf("Grade A");
            break;
        case 8:
            printf("Grade A");
            break;
        case 7:
            printf("Grade B");
            break;
        case 6:
            printf("Grade C");
            break;
        case 5:
            printf("Grade D");
            break;
        case 4:
            printf("Grade D");
            break;
        case 3:
            printf("Grade F");
            break;
        default:
            printf("Grade F");
            break;
        }
    } 
    getch();
    return 0;   
}