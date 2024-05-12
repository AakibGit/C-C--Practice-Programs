#include<iostream>

using namespace std;

class abstract
{
	public:
		virtual void fun()=0;
	
		
	void print()
	{
		cout<<"Abstract Class"<<endl;	
	}	
	
	
};

class overide: public abstract
{
		public:
		void fun()
		{
			cout<<"Overide function";
		}
		
		void add(int a,int b)
		{
		int c = a+b;
		
		cout<<"The Addition is "<<c<<endl;
		}	
};

int main()
{
	overide o;
	o.print();
	o.add(5,4);
 return 0;
}

