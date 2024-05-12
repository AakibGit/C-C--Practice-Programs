#include<iostream>

using namespace std;

template <class t>

class f1
{
	private:
		t num1,num2;
	public:
		f1(t n,t n1)
		{
			num1=n;
			num2=n1;
			cout<<"the total is "<<num1+num2<<endl;
		}	
};


int main()
{
	f1 <float> f(22.12,8.9);
	
}
