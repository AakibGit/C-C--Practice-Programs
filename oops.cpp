#include<iostream>

using namespace std;

class tryy
{
	private:
		
	int a,b,c;
	public:
		
	tryy()// constructor;
	{
		cout<<a<<endl;
		}	
	tryy(int x,int y)
	{
		a=x,b=y;
		cout<<a+b<<endl;
		
	}
	tryy(int x,int y,int z){
		a=x,b=y,c=z;
		cout<<a+b+c<<endl;
	}
};

int main()
{	
//	tryy t;
	tryy t(5,20,5);
	tryy t1(4,2,5);
	
	return (0);
}
