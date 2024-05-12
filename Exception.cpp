#include<iostream>

using namespace std;

int main()
{

int a =10;
int b =0 ;

try
{
	int c = a/b;
	cout<<c<<endl;
	
	throw(c);
}
catch(int e)
{
	cout<<"Error "<<e<<endl;
}

 return 0;
}

