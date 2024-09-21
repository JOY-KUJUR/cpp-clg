#include<stdio.h>
#include<conio.h>

int main()
{
    int ar[100],i,j,k,size;
    printf("Declare the size of the array:");
    scanf("%d",&size);
 
    printf("\nEnter the elements of the array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&ar[i]);
    }

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(ar[i]==ar[j])
            
            {
                for(k=j;k<size;k++)
                {
                    ar[k]=ar[k+1];
                }
                size--;
                j--;
            }
        }
    }
    printf("\nResultant Array:");
    for(i=0;i<size;i++)
    {
        printf("%d  ",ar[i]);
    }
    
    getch();
    return 0;
}