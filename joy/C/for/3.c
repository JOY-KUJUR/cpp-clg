#include <stdio.h>
#define MAX_SIZE 100 

int main()
{
    float temp,arr[MAX_SIZE];
    int size;
    int i, j;
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] > arr[j])
            {
                temp     = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nElements of array in ascending order: ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\nElements of array in decending order: ");
    for(i=size; i>0; i--)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}