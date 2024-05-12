#include<iostream>
using namespace std;

int main()
{
	int a=0,rev,n,c;
	cout<<"enter number:\n";
	cin>>n;
	c=n;
//	for(a=0;a<=10;a++)
//	{	
//		sum+=a;
//		cout<<a<<"\n";
//	}
//	cout<<"the sum of number from 0 to 10 is "<<sum;
while(n>0)
{
	rev=n%10;
//	a=rev+(a*10);
	a+=(rev*rev*rev);
//	cout<<rev;
	n=n/10;
}
if(c==a)
{
//	cout<<"palindrone";
	cout<<"armstrong";
}
else
{
//	cout<<"not palindrone";
	cout<<"not armstrong";
}
//cout<<a;
}


