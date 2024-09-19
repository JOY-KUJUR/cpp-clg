#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"enter the size of array to mean:";
	cin>>n;
	int arr[n];
	int i,sum=0;
	for(i=0;i<n;i++){
		cout<<"enter the "<<i<<":"<<endl;
		cin>>arr[i];
		sum=sum+arr[i];
	}
	
//	for(i=0;i<n;i++){
//		sum=sum+arr[i];
//		cout<<sum<<endl;
//	}
	int avg;
	avg=sum/n;
	cout<<"means is :"<<avg;
	return 0;
}
