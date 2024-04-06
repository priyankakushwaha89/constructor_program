//WAP to define a constructor and initialise the class data memeber variables with constant

#include<iostream>
using namespace std;

class A
{
	int a,b,c;
	public:
		A()
		{
			a=10,b=20,c=30;
		}
		void show()
		{
			cout<<"a="<<a<<" "<<"b="<<b<<" "<<"c="<<c<<endl;
		}
};
int main()
{
	A x,y,z;
	x.show();
	y.show();
	z.show();
	
	return 0;
}
