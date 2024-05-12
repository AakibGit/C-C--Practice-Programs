#include<iostream>

using namespace std;

class abs
{	
	
	public:
		int a;
	virtual	void f1()=0;
};
class ab:public abs
{
	public:
		void f1()
		{
			cout<<"overriding funtion to acces abstract class"<<endl;
		}
	void dis()
		{
			a=10;
			cout<<a<<endl;		
		}
};
int main()
{
	ab a1;
//	a1.a=10;
	a1.dis();
	return (0);
}
