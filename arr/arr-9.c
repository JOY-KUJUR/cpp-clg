#include<stdio.h>
int sum( int arr[], int n ) 
{
  if (n < 0) 
  {
    return 0;
  } else
  {
    return arr[n] + sum(arr, n-1);
  }
}
int main()
{
  int array[] = {11,22,333,44};
  int s;
  s = sum(array,6);
  printf("Sum of array elements is: %d",s);
  return 0;
}
