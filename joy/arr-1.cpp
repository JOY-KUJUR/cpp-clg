#include<stdio.h>
int main(){
	 int arr[5]={0,0,0,0,0};
	 int i;
	 for(i=0;i<5;i++){
	 	printf("%d ",arr[i]);
	 }
	
	 int r,m;
	 printf(" enter the index where u want to replace :");
	 scanf("%d",&r);
	 printf(" enter the number : ");
	 scanf("%d",&arr[r]);
	 for(i=0;i<5;i++){
	 	printf("%d ",arr[i]);
	 }
	 return 0;
	 
}
