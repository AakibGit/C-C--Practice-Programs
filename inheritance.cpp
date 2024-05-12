#include<iostream>
#include<string>

using namespace std;

class A
{
	public:
	int age;
	void get(int a)
	{
		age=a;
		cout<<"your age is : "<<age<<endl;
	}
		
};

class B:public A
{
	public:
	string name;
	void get1(string naam)
	{
		name=naam;
		cout<<"your name is : "<<name<<endl;
	}
};

class C:public B
{	
	public:
	int x,y;
	void add(int x,int y)
	{
		cout<<"Addition of two number is :"<<x+y<<endl;
		}	
};

class D:public C
{
	
};


int main()
{
	D ob;
	ob.get(52);
	ob.get1("aakib");
	ob.add(10,4);
	return (0);
}
