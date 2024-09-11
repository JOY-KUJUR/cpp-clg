#include<iostream>
using namespace std;

int main(){
	int a[6]={1,2,9,8,4,23};
	int i,j,temp;

	for (i=0;i<6;i++){
	  for(j=0;j<6;j++){
		 if (a[j] > a[j + 1]){
		 	temp=a[j];
		 	a[j]=a[j+1];
		 	a[j+1]=temp;
		 }
              
                  
               
	  }
	}
		for (i=0;i<6;i++){
		cout<<"orted the valeus for :"<<a[i]<<endl;
	
	}
	return 0;
}
