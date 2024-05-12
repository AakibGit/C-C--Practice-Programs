#include<iostream>

using namespace std;

int main()
{
	int n,sum=0,q;
	
	cout<<"Enter Digits "<<endl;
	cin>>n;
	
	while(n!=0)
	{
		q = n%10;
		sum = sum+ q;
		n = n/10;
	}
	
	cout<<"The sum of digits are "<<sum;
	
 return 0;
}

