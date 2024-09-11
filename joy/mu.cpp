#include<iostream>
using namespace std;

class animal{
	public:
		void ani(){
			cout<<"dog "<<endl;
		}
};
class bark{
	public:
		void b(){
			cout<<"barking"<<endl;
		}
};
class eating:public animal,public bark{
	public:
		void eat(){
			cout<<"eating"<<endl;
		}
};
int main(){
	eating e;
	e.eat();
	e.b();
	e.ani();
	return 0;
}
