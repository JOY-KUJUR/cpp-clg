#include<stdio.h>
#include<conio.h>

void main(){
	
	int s1,s2,s3;
	
	printf("enter the angle  of triangle to check if it is valid or not : \n");
	scanf("%d",&s1);
	scanf("%d",&s2);scanf("%d",&s3);
	int tri=s1+s2+s3;
	if(tri==180){
		printf("its is triangle");
	}
	else{
			printf("its is not triangle");
	}

	
	
	
}
