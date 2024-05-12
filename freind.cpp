#include<iostream>

using namespace std;

class A
{
	private:
		
	int a,b;
	
		void get(int x,int y)
		{
			a=x,b=y;
			cout<<x<<endl;
			cout<<y<<endl;
		}
	
		friend void take(A a);		
};
	
 void take(A a)
	{
		a.get(2,4);
	}

int main()
{
	A a;
	take(a);	
}
