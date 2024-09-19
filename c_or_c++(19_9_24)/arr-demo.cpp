#include<iostream>
using namespace std;

int main(){
	int max,min,i,temp,j;
	int n=3;
	

	
	int arr[n]={1,6,3};
	
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
  
    

    for(i=0;i<3;i++){
    	cout<<arr[i]<<" ";
	}
	return 0;
}
