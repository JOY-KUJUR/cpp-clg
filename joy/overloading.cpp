#include<iostream>
using namespace std;

class over{
	int a;
	public:
		void area(){
			cout<<"this is area"<<endl;
		}
		void area(int r){
			cout<<"this is area"<< 3.14*r*r<<endl;
		}
		void area(int l,int b){
			cout<<"this is area"<< l*b<<endl;
		}
};
int main(){
	over o;
	o.area();
	o.area(9);
	o.area(1,2);
	return 0;
}
