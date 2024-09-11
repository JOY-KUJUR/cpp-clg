#include<iostream>
using namespace std;

class p{
	public:
		void area(){
			cout<<"area is printing"<<endl;
		}
};
class ch:public p{
	public:
		void area(int a){
			cout<<"area is printing"<<a*a<<endl;
		}
};
int main(){
	ch obj;
	obj.area(9);
}
