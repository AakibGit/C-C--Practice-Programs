#include<iostream>

using namespace std;

int main()
{
	int i,j,k,n;

	
	cout<<"Enter number "<<endl;
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=i;j<n;j++)
		{
			cout<<" ";
		}
		
		for(j=1;j<=i;j++)
		{
			cout<<char(i+64);
		}
		
		cout<<endl;
	}
 return 0;
}

