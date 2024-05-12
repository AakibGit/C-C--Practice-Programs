#include<iostream>

using namespace std;

int main()
{
	int x=-1;
	
	cout<<"Before try"<<endl;
	
	try{
		cout<<"inside try"<<endl;
		if(x<0)
		{
			throw x;
			cout<<"After throw (Never executed)\n";
		}
	}
	catch(int x){
		cout<<"Exception Caught\n";
	}
	cout<<"AFter catch (will be executed )\n";
	
	return 0;
	
}
