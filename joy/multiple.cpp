#include<iostream>
using namespace std;


class base{
	public:
		int x=10;
	
};
class d1:public base{
	public:
	d1(){
		cout<<x<<endl;
	}
};
class d2:public base{
	public:
	d2(){
		cout<<x<<endl;
	}
};
int main(){
	d2 d;
	d1 o;
	return 0;
}
