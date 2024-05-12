#include<iostream>

using namespace std;

int main()
{
	int age;
	cout<<"Enter your age: \n";
	cin>>age;
	
	try
	{
		cout<<"this always display\n";
		if(age>18)
		{
			cout<<"allowed \n";
		}
		else
		{
			throw (age);	
		}
		
	}
	catch(...)
	{
		cout<<"Your age is "<<age<<endl;
		cout<<"not allowed to visit for under 18 year\n";
	}
}
