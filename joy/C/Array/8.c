#include <stdio.h>
int main()
{
    int arr[50]; 
    int i, N;
    printf("Enter size of the array : ");
    scanf("%d", &N);
    printf("Enter elements in array : ");
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nAll negative elements in array are : ");
    for(i=0; i<N; i++)
    {
        if(arr[i] < 0)
        {
            printf("%d\t", arr[i]);
        }
    }
    return 0;
}