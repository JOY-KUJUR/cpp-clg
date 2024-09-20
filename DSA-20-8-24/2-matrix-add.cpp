#include<iostream>

using namespace std;

int main(){
	int arr[3][3]={{1,1,1},{2,2,2},{3,3,3}};
	
	int arr2[3][3]={{1,1,1},{2,2,2},{3,3,3}};
	
	int add[3][3];
	
	int i,j;
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
	cout<<"addition of 2 materix is"<<endl;
	for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				add[i][j]=arr[i][j]+arr2[i][j];
				cout<<add[i][j]<<" ";
			}
			cout<<endl;
	}
	return 0;
}
