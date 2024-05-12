#include<iostream>

using namespace std;

class polymorphism
{
	public:
	virtual void same()
		{
			cout<<"The Polymorphism Parent class "<<endl;	
		}	
};

class poly:public polymorphism
{
	public:
		
	void same()
		{
			cout<<"The Polymorphism Child Class"<<endl;	
		}
};

int main()
{

polymorphism p,*pp;
poly p1;

 pp = &p1;

//p.same();

pp->same();	
	
 return 0;
}

