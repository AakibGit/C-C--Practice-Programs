#include<iostream>

using namespace std;

namespace first
{
	int x = 10;
}

namespace second
{
	string name = "c++";	
}
namespace third
{
	double point = 20.15;	
}

int main()
{	
using namespace first;
using namespace second;
using namespace third;

	cout<<x<<endl;
	cout<<name<<endl;
	cout<<point<<endl;
	
 return 0;
}

