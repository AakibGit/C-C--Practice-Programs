#include<iostream>

using namespace std;

int reverse(int n)
{
	int r,num=0;
	
	while(n!=0)
	{
		r = n%10;
		num = (num*10)+r;
		n = n/10;	
	}	
	
	return  num;
}

int main()
{
	int n;
	
	cout<<"Enter number"<<endl;
	cin>>n;
	
	cout<<reverse(n)<<endl;
	

 return 0;
}

