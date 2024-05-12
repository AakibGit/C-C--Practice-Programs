#include<iostream>

using namespace std;

class parent
{
	protected:
		int a;
};

class child:public parent
{
	public:
		dis()
		{
			a=100;
			cout<<"number "<<a;
		}
};
int main()
{
	child c;
	c.dis();
	return 0;
}
