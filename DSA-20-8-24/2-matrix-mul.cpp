#include<iostream>

using namespace std;

int main(){
	int arr[3][3]={{1,1,1},{1,1,1},{1,1,1}};
	
	int arr2[3][3]={{2,2,2},{2,2,2},{2,2,2}};
	
	int add[3][3] = {0};;
	
	int i,j,k;
	cout<<"array 1:"<<endl;
	for(i=0;i<3;i++){
			for(j=0;j<3;j++){
			
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
	}
	cout<<endl;;
	cout<<"array 2:"<<endl;
	for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				
				cout<<arr2[i][j]<<" ";
			}
			cout<<endl;
	}
	cout<<endl;
	cout<<"multiplication of 2 materix is"<<endl;
	for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				for(k=0;k<3;k++){
					add[i][j]=add[i][j]+arr[i][k]*arr2[k][j];
				}
				
			}
		
	}
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				
				cout<<add[i][j]<<" ";
			}
			cout<<endl;
	}
	return 0;
}
