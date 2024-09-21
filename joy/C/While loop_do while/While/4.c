#include<stdio.h>
#include<conio.h>    
int main()    
{    
 int n1=0,n2=1,n3,i=2,number;    
 printf("Enter the number of elements you would like to print:");    
 scanf("%d",&number);    
 printf("\n%d %d",n1,n2);  
 while(i<number)
 {
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;
  i++;  
 }  
/*for(i=2;i<number;++i)   
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }
 */  
  return 0;  
 }    