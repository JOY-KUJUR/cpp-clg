#include<stdio.h>
#include<conio.h>

void main(){
	int s1,s2,s3;
	
	printf("enter the the side  of triangle to find its type : \n");
	
	printf("\n enter side one: ");
	scanf("%d",&s1);
	
	printf("\n enter side two: ");
	scanf("%d",&s2);
	
	printf("\n enter side three: ");
	scanf("%d",&s3);
	
	if(s1+s2>s3 || s2+s3>s1 || s1+s3>s2){
		printf("trinagle is valid ");
	}
	
	else{
		printf("it is not triangle");
	}
}
