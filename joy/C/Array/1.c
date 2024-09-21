#include<stdio.h>
#include<conio.h>

int main()
{
    int len,i,j,loc,val;
    int b[100];
    
    printf("Enter the length of the array");
    scanf("%d",&len);

    printf("\n Enter the elements of the array:");
    for(i=0;i<len;i++)
    {
        scanf("%d",&b[i]);
    }

    printf("\nEnter the location where you want to insert a value:");
    scanf("%d",&loc);
    
    printf("\nEnter the value you want to insert:");
    scanf("%d",&val);

    for(i=len-1;i>=loc-1;i--)
    {
        b[i+1]=b[i];
    }
    b[loc-1]=val;
    printf("\nResultant array is:");
    for(i=0;i<=len;i++)
    {
        printf("%d ",b[i]);
    }
    getch();
    return 0;
}