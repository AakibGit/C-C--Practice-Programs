#include<iostream>

using namespace std;

int main()
{
	int i,j,k,c=65;
	
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)
		{
			cout<<" ";
		}
		
		for(k=1;k<=i;k++)
		{
		cout<<char(c)<<" ";
		c++;
		}
		c = 65;
		cout<<"\n";
		
	}
	
	
 return 0;
}

