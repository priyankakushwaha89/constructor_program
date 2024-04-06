// Constructor Overloading

#include<iostream>
using namespace std;

class A
{
	int a,b;
	public:
		A()
		{
			a=0;b=0;
		}
		A(int i,int j)
		{
			a=i;
			b=j;
		}
		A(A &k)
		{
			a=k.a;
			b=k.b;
		}
		void show()
		{
			cout<<"a="<<a<<" "<<"b="<<b<<"  "<<endl;
		}
};
int main()
{
	A x,y(20,30);
	A z(y);
	x.show();//default constructor call
	y.show();//parametrized constructor call
	z.show();//copy constructor call
	
	return 0;
}
