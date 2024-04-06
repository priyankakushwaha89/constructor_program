//Copy constructor
#include<iostream>
using namespace std;

class employ
{
	string ename;
	float salary;
	public:
		employ(string i,float j)
		{
			ename=i;
			salary=j;
		}
		employ(employ &k)
		{
			ename=k.ename;
			salary=k.salary;
		}
		void show()
		{
			cout<<"Employ name="<<ename<<"   "<<"Salary of the employ="<<salary<<endl;	
		}
		
};
int main()
{
	employ x("Ramesh",20000),y("Suresh",20500),z("Mahesh",30000);
	
	x.show();
	y.show();
	z.show();
	cout<<"copy constuctor"<<endl;
	employ a(x);
	i.show();
	
	return 0;
}

