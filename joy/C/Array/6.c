#include<stdio.h>
#include<conio.h>
int main()
{
 char ch[]="**********.";
 char c='A';
 int i=0,j;

 printf("Write Your Name \n\n");

 while(c)
 {
  c=getch();
  printf("%c\a",ch[i]);
  i++;
  if(i==10)
  {
   printf(" "); 
   i=0;
  }
 }
 return 0;
}

