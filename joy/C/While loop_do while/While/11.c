#include <stdio.h>  
#include<conio.h>
  
int main() {  
    int notes[8] = {500, 100, 50, 20, 10, 5, 2, 1};  
    int amount, temp,i;  
  
printf("Enter the amount: ");  
scanf("%d", &amount);  
  
    temp = amount;  
  
    while(i<8) {  
        printf("\n%d notes is: %d", notes[i], temp / notes[i]);  
        temp = temp % notes[i];  
        i++;
    }  
    getch();
    return 0;  
}  
