#include<iostream>
using namespace std;

int main()
{
	int a[5]={1,2,3,4,5};
	int *ptr=a;
	
	cout<<*ptr<<"\n";
	ptr++;
	cout<<*ptr<<"\n";
	ptr++;
	cout<<*ptr<<"\n";
	ptr--;
	cout<<*ptr<<"\n";
	ptr++;
	cout<<*ptr;
}
