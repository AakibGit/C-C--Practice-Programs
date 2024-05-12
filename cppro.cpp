#include<iostream>
using namespace std;



int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
	
	if(a>b && a>c)
	{
		cout<<a<<" is greater";
	}
	else if(b>a && b>c)
	{
		cout<<b<<" is greater";
	}
	else
	{
		cout<<c<<" is greater";
	}
}


