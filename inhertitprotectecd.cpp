#include<iostream>

using namespace std;

class A
{
	protected:
	int age;
		
};

class B:public A
{
	public:
	 void get(int ag);
};

	void B::get(int ag)
	{
		age=ag;
		cout<<"age from class A from protected access specifier "<<age<<endl;
	}
	
int main()
{
	B ob;
	ob.get(19);
	
}
