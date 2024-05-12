#include<iostream>
#include<string.h>

using namespace std;

int main()
{	
	int i,j,arr[3][5];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<"\n";
	}

}
