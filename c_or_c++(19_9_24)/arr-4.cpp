#include<iostream>

using namespace std;

int  main(){
	int arr[3][3]={{1,2,3},{1,2,1},{1,1,1}};
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
