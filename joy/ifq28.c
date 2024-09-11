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
	
	if(s1 == s2 && s2 == s3 && s1==s3){
		printf("it is equilateral triangle");
		
	}
	else if(s1 == s2 || s2 == s3 || s1==s3){
	printf("it is isoscales triangle");	
	}
 	else {
 		printf("it is scalene triangle");
	 }
 }
