#include<iostream>
using namespace std;

int arrmul(int a[][3],int b[][3])
{
	int sum=0,i,j,k,c[3][3];
	
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
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<c[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	
}

int main()
{
	int a[3][3],b[3][3],i,j;
	
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
	
	cout<<"the multiplycation of two matrix"<<endl;
	
	arrmul(a,b);
	return 0;
}
