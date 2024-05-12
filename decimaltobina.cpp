#include<iostream>

using namespace std;

int main()
{
	int r,n,base=1,b=0;
	
	cout<<"enter decimal to convert binary"<<endl;
	cin>>n;
	
	while(n>0)
	{
		r=n%2;
		b=b+r*base;
		n=n/2;
		base=base*10;
	}
	cout<<b<<endl;
	
}
