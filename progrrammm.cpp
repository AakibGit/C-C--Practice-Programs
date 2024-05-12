#include<iostream>

using namespace std;

class in
{
	public:
	int a;
	virtual void f1()=0;
	
	void get(int x)
	{
		a=x;
		cout<<a<<" calling funtion from abstract class from pure virtual funtion"<<endl;
		 } 	
};

class ni:public in
{
	public:
	void f1()
	{
		cout<<"overiding funtion"<<endl;
	}
		
};


int main()
{
	ni i;
	i.get(1);
	i.f1();
//	i.f1();
	
}

