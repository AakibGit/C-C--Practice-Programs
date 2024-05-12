#include<iostream>

class A
{
	protected:
		
	int a;
	friend void get(A x);	
};
void get(A x)
{
	int i;
	x.a=10;
	for(i=1;i<=10;i++)
	{
		std::cout<<x.a*i<<"\n";
	}
}

class B
{
	 a=10;
	
 friend	void dis();


friend class A;
};	
	void dis();
	{
		std::cout<<a<<"\n";
	}
//	std::cout<<x.a;

int main()
{
	A t;
	dis(t);
//	get(t);
}
