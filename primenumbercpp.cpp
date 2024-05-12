#include<iostream>

using namespace std;

int main()
{
	int n,i,p=1;
	
	cout<<"Enter number to check prime number :";
	cin>>n;
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			p=0;
		}
	}
	
	(p==1)?cout<<"Prime":cout<<"Not prime";
	
 return 0;
}

