#include<iostream>

using namespace std;

int main()
{
	int r,n,base=1,d=0;
	
	cout<<"enter binary number to convert in binary"<<endl;
	cin>>n;
	
	while(n>0)
	{
		r=n%10;
		d=d+r*base;
		n=n/10;
		base=base*2;
	}
	cout<<d<<endl;
}
