#include<iostream>

using namespace std;

class add
{
	int a,b;
	public:
		void get(int x,int y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<a<<endl;
			cout<<b<<endl;
		}
			
		add operator +(add obj)
		{
			add tem;
			tem.a=a+obj.a;
			tem.b=b+obj.b;
			return tem;
		}
		
		add operator -(add obj)
		{
			add tem;
			tem.a=a-obj.a;
			tem.b=b-obj.b;
			return tem;
			
		}
		
		add operator *(add obj)
		{
			add tem;
			tem.a=a*obj.a;
			tem.b=b*obj.b;
			return tem;
			
		}
		
};

int main()
{
	class add i,j,k,l;
	i.get(120,120);
	j.get(10,20);
	l.get(10,20);
	
//	k=i+j+l;
	k=i-j;
	k.display();
	cout<<endl;
	k=i*j;

	k.display();
	return 0;
}


