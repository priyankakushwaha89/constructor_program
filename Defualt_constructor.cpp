//Defualt constructor: constructor having no argument set

#include<iostream>
using namespace std;

class sum
{
	int a,b;
	public:
		sum()
		{
			a=12;
			b=10;
		}
		void add()
		{
			int c=a+b;
			cout<<"sum of two numbers="<<c<<endl;
		}
};
int main()
{
	sum x;
	x.add();
	
	return 0;
}
