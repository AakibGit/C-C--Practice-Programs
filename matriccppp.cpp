#include<iostream>

using namespace std;

int main()
{
	
	int sum=0,a[3][3],b[3][3],c[3][3],i,j;
	
	cout<<"Enter first matrix element"<<endl;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	
	cout<<"Enter second array element"<<endl;
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>b[i][j];
		}
	}
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				sum+=a[i][k]*b[k][j];
			}
			c[i][j]=sum;
			sum=0;
		}
	}
	
	cout<<"the multiplycation of two matrix"<<endl;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<c[i][j]<<"\t";
		}
		cout<<endl;
	}

 return 0;
}

