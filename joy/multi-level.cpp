#include<iostream>
using namespace std;

class college{
	public:
	college(){
		cout<<"this is college (parent classs)"<<endl;
	}
};
class department:public college{
	public:
	department(){
		cout<<"this is the department (child of college)"<<endl;
	}
};
class mca:public department{
	public:
	mca(){
		cout<<"this is mca (the child of department)"<<endl;
	}
};
int main(){
	mca obkj;
	return 0;
}
