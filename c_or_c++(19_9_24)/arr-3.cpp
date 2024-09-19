#include<iostream>
using namespace std;

int main(){
	int max,min,i,temp,j;
	int n;
	
	
	
	int arr[]={4,3,21};
	
	for(i=0;i<3;i++){
		for(j=1;j<3-1;j++){
			
            if (arr[j] < arr[j - 1]) 
            {
                temp=arr[j];
                arr[j]=arr[j-1];
				arr[j-1]=temp;  
            }
		}
		
    }
  
    
   cout<<min;
   
    for(i=0;i<3;i++){
    	cout<<arr[i]<<" ";
	}
	return 0;
}
