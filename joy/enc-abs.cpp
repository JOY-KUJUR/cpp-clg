#include <iostream>
using namespace std;

class Summation {
private:
	
	int a, b, c; 
public:
	void sum(int x, int y)
	{
		a = x;
		b = y;
		c = a + b;
		cout<<"Sum of the two number is : "<<c<<endl;
	}
};
int main()
{
	Summation s;
	s.sum(5, 49);
	return 0;
}

