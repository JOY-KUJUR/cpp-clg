#include<iostream>
using namespace std;

class p{
	private:
		int x=134;
		
	public :
		friend void fre();
	
};
void fre(){
	p obj;
	obj.x;
	cout<<obj.x;
	
}
int main(){
    
	fre();
	
	
}
