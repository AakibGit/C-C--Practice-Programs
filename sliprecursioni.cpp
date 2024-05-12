#include<iostream>

using namespace std;

int fibonacci(int n)
{
	if(n!=0)
	{
		static int a=0,b=1,c;
		c = a+b;
		a=b;
		b=c;
		
		cout<<c<<" ";
			
		fibonacci(n-1);	
	}	
	
}

int main()
{
	int n;
	
	cout<<"Enter number "<<endl;
	cin>>n;
	
	cout<<"0 "<<"1 ";
	
	fibonacci(n);
	
 return 0;
}


