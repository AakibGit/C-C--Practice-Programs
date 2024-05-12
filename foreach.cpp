#include<iostream>

using namespace std;

int main()
{
	string name[]={"Aakib","Arsalan","Zoher","Aliyan"};
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	
	for(int elm:arr)
	{
		cout<<elm<<endl;
	}
	cout<<endl;
	
	for(string list:name)
	{
		cout<<list<<endl;
	}
 return 0;
}

