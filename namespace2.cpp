#include<iostream>

using namespace std;

namespace first
{
	int print()
	{
		cout<<"NameSpace"<<endl;
	}
}
	
int main()
{
	using namespace first;
	
	print();
	
//	first::print();
	
 return 0;
}

