#include<stdio.h>
#include<conio.h>

void main(){
	int num;
	printf("enter the number");
	scanf("%d",&num);
	int og=num;
	
	int rem,c,arm=0;
	 while(num!=0){
	 	rem=num%10;
	 	c=rem*rem*rem;
	 	arm=arm+c;
	 	num=num/10;
	 }
	 printf("%d",arm);
	 printf("\n***************");
	 
	 if(arm==og){
	 	printf("\nthe number is armstrong");
	 	
	 }
	 else{
	 	printf("\nthe number is not ");
	 }
}
