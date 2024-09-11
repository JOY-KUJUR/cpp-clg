#include<stdio.h>
#include<conio.h>

void main(){
	
	int rem;
	int rev=0;
	int num;
	int i;
	
	printf("enter the number");
	scanf("%d",&num);
	
	int og=num;
	
	while(num!=0){
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
		
	}
	printf("\n ************");
	if(og==rev){
		printf("\n the number is palindrome ");
	}
	else{
		printf("\n the number is not palindrome ");
	}
	
}
