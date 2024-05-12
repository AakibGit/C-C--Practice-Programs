#include<iostream>

using namespace std;

int main()
{

int arr1[2][2],arr2[2][2],arr3[2][2],i,j,k,sum=0;

cout<<"Enter first array Elements" <<endl;

for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		cin>>arr1[i][j];
	}
}

cout<<endl;

cout<<"Enter Second array Elements" <<endl;

for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		cin>>arr2[i][j];
	}
}

cout<<"The result"<<endl;

for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		for(k=0;k<2;k++)
		{
			sum = arr1[i][k] * arr2[k][j];
		}
		arr3[i][j] = sum;
		sum=0;
	}
}

for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		cout<<arr3[i][j]<<"\t";
	}
}


 return 0;
}

