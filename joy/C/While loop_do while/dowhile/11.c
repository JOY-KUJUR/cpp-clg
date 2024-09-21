#include <stdio.h>  
#include<conio.h>
  
int main() {  
    int notes[8] = {500, 100, 50, 20, 10, 5, 2, 1};  
    int amount, temp,i;  
  
printf("Enter the amount: ");  
scanf("%d", &amount);  
  
    temp = amount;  
  
    do{  
        printf("\n%d notes is: %d", notes[i], temp / notes[i]);  
        temp = temp % notes[i];  
        i++;
    } while(i<8);
    getch();
    return 0;  
}  
