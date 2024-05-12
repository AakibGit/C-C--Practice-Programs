#include<iostream>
using namespace std;

class demo
{
	int a,b;
	public:
		g(int aa,int bb)
		{
			a=aa;
			b=bb;
		}
		d()
		{
			cout<<a<<endl;
			cout<<b<<endl;
		}
		
//		demo operator +(demo c)
//		{
//			demo t;
//			t.a=a+c.a;
//			t.b=b+c.b;
//			return t;
//		}
		demo add(demo c)
		{
			demo t;
			t.a=a+c.a;
			t.b=b+c.b;
			return t;
		}
};
int main()
{
	demo a1,a2,a3;
	a1.g(2,4);
	a2.g(4,2);
	
//	a3=a1+a2;
//	a3=a1.operator+(a2);
	a3=a1.add(a2);
	a3.d();
	return 0;
}
