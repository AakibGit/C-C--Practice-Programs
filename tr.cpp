#include<iostream>

using namespace std;

int main()
{

	int marks;
	
	cout<<"Enter Marks"<<endl;
	cin>>marks;
	
	try
	{
		if(marks>=35)
		{
			cout<<"YOU ARE PROMOTED TO NEXT CLASS"<<endl;
		}
		else
		{
			throw(marks);
		}
	}
	catch(int error)
	{
		cout<<"YOU HAVE TO GIVE REEXAM TO PROMOTE TO NEXT CLASS "<<endl;
	}
	
	
 return 0;
}

