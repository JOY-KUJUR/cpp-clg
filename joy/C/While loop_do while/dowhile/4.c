#include<stdio.h>
#include<conio.h>    
int main()    
{    
 int n1=0,n2=1,n3,i=2,number;    
 printf("Enter the number of elements:");    
 scanf("%d",&number);    
 printf("\n%d %d",n1,n2);  
 do
 {
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;
  i++;  
 }while(i<number); 
  return 0;  
}    