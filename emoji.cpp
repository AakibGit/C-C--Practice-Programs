#include<iostream>

using namespace std;

class parent
{
	public:
		int age = 19;	
};

class child : public parent 
{
	
};

int main()
{
		child c;
		cout<<c.age<<endl;
}
