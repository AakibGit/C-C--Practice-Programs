#include<iostream>

using namespace std;

class first
{
	
	public:
		int a;
		
	virtual	void display(int b)
		{	
			a=b;
			cout<<a<<" is the number"<<endl;	
		}	
};
class second:public first
{
		void display(int b)
		{	
			a=b;
			cout<<a<<" number"<<endl;	
		}
};

int main()
{
	first *ptr;
	second s;
	ptr=&s;
	
	ptr->display(10);
}
