#include<iostream>
using namespace std;

int main(){
	int max,min,i,temp,j;
	
	int arr[]={4,3,21};
	int larg=0;
	int small=9999;
	for(i=0;i<3;i++){
		if(arr[i]>larg){
			larg=arr[i];
			max=i;
		}
		
    }
    for(i=0;i<3;i++){
		if(arr[i]<small){
			small=arr[i];
			min=i;
		}
		
    }
    
//    cout<<max;
//    cout<<min;
    temp=arr[min];
    arr[min]=arr[max];
    arr[max]=temp;
    
    for(i=0;i<3;i++){
    	cout<<arr[i]<<" ";
	}
	return 0;
}
