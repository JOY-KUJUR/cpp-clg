#include<stdio.h>
#include<conio.h>

void main(){
	int num;

	
	printf("enter the limit:");
	scanf("%d",&num);	
	int i=0;
	int c;
	int next=1;
	int pre=0;
	printf("%d",pre);
	printf("\n%d",next);
	 while(i<num){
	 	 c=pre+next;
	 	
	 	 pre=next;
	 	 next=c;
	 	 i++;
	 	 printf("\n");
	    printf("%d",c);
	    
	 }
	 
	 
	 
	 	
	
}
