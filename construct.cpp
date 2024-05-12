#include<iostream>

using namespace std;

class emp
{
	int id;
	string name;
	public:
		emp(int n,string n1)
		{
			id=n;
			name=n1;
		}
		~emp()
		{
			cout<<"the id is "<<id<<endl;
			cout<<"the name is "<<name<<endl;
		}
			
};

int main()
{
	emp e(101,"aakib");
	
	return 0;
}
