#include<iostream>

using namespace std;

class parent
{
	public:
		virtual	void print()
		{
			cout<<"THIS IS PRINT FUNCTION IN PARENT CLASS"<<endl;	
		}	
	 	virtual	void show()
		{
			cout<<"THIS IS SHOW FUNCTION IN PARENT CLASS"<<endl;
		}
};

class child : public parent	
{
	public:
		void print()
		{
			cout<<"THIS IS PRINT FUNCTION IN CHILD CLASS"<<endl;	
		}	
		void show()
		{
			cout<<"THIS IS SHOW FUNCTION IN CHILD CLASS"<<endl;
		}
};

int main()
{
	parent *p;
	child c;
	p = &c;
	
	p->print();
	p->show();
	
 return 0;
}

