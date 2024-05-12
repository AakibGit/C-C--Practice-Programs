#include<iostream>

using namespace std;

class self
{
	public:
		int id;
		string name;
		
	self(int id , string name)
	{
		this->id = id ;
		this->name = name;
	}	
	
	void info(void)
	{
		cout<<"The Id is "<<id<<endl;
		cout<<"The Name is "<<name<<endl;
		
	}
};

int main()
{

self s(11,"programmer");

s.info();


 return 0;
}

