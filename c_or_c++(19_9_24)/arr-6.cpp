#include<iostream>

using namespace std;

int main(){
	int n,i;
	cout<<"enter the highest exportnet";
	cin>>n;
	n++;
	int a1[n];
	int a2[n];
	for(i=0;i<n;i++){
		cout<<"enter the a1 "<<i<<":";
		cin>>a1[i];
	}
	cout<<endl;
	for(i=0;i<n;i++){
		cout<<"enter the a2 "<<i<<":";
		cin>>a2[i];
	}
	int a3[n];
	for(i=0;i<n;i++){
		a3[i]=a1[i]+a2[i];
	}
for(i=0;i<n;i++){
		cout<<a3[i]<<"x"<<i<<"+";
	
	}
	return 0;
}
