#include <stdio.h>
#include <string.h>
int main()
{
char string[20];
int i, len, flag = 0;
printf("Enter a string to check palindrome:"); 
scanf("%s", string); 
len = strlen(string); 
for(i = 0; i < len; i++)
{
if(string[i] != string[len-i-1])
{
flag = 1;
break;
}
}
if(flag)
{
printf("Given string is not palindrome");
}
else {
printf("Given string is palindrome");
}
return 0;
}