#include<iostream>

using namespace std;

int main()
{
	int i,n,f=1; 
	
	cout<<"Enter a number to check factorial ";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		f *= i;
	}
	
	cout<<"The factorial of number is "<<f<<endl;
	
 return 0;
}

