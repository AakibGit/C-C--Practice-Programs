#include<iostream>
#include<string>

using namespace std;

class demo
{
	private:		
		int age;
		string name;
	public:
		demo(int a,string naam)
		{
			age=a;
			name=naam;
			
		}
		void dis()
		{
			cout<<"your name is "<<name<<endl;
			cout<<"your age is "<<age<<endl<<endl;
		}
	
};

int main()
{	
	demo s(20,"aakib");
	s.dis();
	cout<<"copy constructor"<<endl<<endl;
	demo s1(21,"usman");
	s1.dis();

	return (0);
}
