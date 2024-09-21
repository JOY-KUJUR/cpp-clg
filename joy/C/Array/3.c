#include<stdio.h>
#include<conio.h>

int main()
{
    int a[100],i,pos,size;
    printf("Enter the number of elements in the array:");
    scanf("%d",&size);
    printf("\nEnter the elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter position to delete from:");
    scanf("%d",&pos);

    if(pos>=size+1)
    {
        printf("\nVALUE ENTERED IS GREATER THAN ARRAY SIZE:");
    }else
    {
        for(i=pos-1;i<size;i++)
        {
            a[i]=a[i+1];
        }
        size--;
        printf("\nResultant array is:");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
    }
    getch();
    return 0;
}