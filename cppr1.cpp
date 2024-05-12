#include<iostream>
using namespace std;

int fun(int n)
{
	if(n<=10)
	{
		cout<<n<<"\n"<<endl;
		fun(n+1);
	}
}

int main()
{
	int n=1;
	fun(n);
		
}


