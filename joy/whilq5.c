#include <stdio.h>  
#include <conio.h>  
void main()  
{  
    int num1, num2, max_div, flag = 1;  
    // accept any two positive number from the user  
    printf( " Enter any two positive numbers to get the LCM \n ");  
    scanf(" %d %d", &num1, &num2);  
      
    // max_div variable holds the max divisible number between num1 and num2.  
    max_div = (num1 > num2) ? num1 : num2;  
      
    while (flag) // (flag = 1)  
    {  
        if (max_div % num1 == 0 && max_div % num2 == 0)  
        {  
            printf( " The LCM of %d and %d is %d. ", num1, num2, max_div);  
            break;  
        }  
        ++max_div; // pre-increment max_div  
    }  
}  
