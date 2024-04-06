//Parametrized constuctor: constructor having argument list

#include<iostream>
using namespace std;

class student
{
	string sname;
	int rno;
	public:
		student(string i,int j)
		{
			sname=i;
			rno=j;
		}
		void show()
		{
			cout<<"student name="<<sname<<"    "<<"Roll number="<<rno<<endl;
		}
} ;
int main()
{
	student x("priyanka",20),y("Riya",25),z("Roshan",30);
	x.show();
	y.show();
	z.show();
	
	return 0;
}
