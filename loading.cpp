#include<iostream>

using namespace std;

class loading
{
	public:
		int x,y;
	
	void set(int i , int z)
	{
		x=i;
		y=z;	
	}	
	
	void dis()
	{
		cout<<x<<" "<<y<<endl;
	}
	
};



int main()
{

loading l,l1,l3;

l.set(2,3);
l.dis();
l1.set(3,2);
l1.dis();

 return 0;
}

