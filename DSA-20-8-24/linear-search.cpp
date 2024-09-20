#include<iostream>

using namespace std;
 int main(){
 	int arr[]={1,2,3,4,56,6,789,9,8,2,34};
 	
 	cout<<"enter the number of find it index in an array :";
 	int n,i;
 	cin>>n;
int flag=0;
 	for(i=0;i<10;i++){
 		if(n==arr[i]){
 		
 		cout<<"element is at :"<<i;
 		 break;
 			
 			
		 }
		 else{
		 flag=0;
		 }
	
		 	
		 
	 }
	 if(flag=0){
	 	cout<<"elements is not present";
	 }
	 
	 return 0;
 }
