#include<iostream>
#include<string>
using namespace std;

class arr
{
	string name;
	
	friend	void get(arr x);
	
friend class arr1	 		 
};

class arr1
{
	string kaam;
	kaam = name;
	public:
		void dis1()
		{
			cout<<kaam<<endl;
		}
};

void get(arr x)
{	
	x.name="aakib";
	cout<<x.name<<endl;
}

int main()
{
	arr ob;
	arr1 on;
	on.dis1();
//	get(ob);
//	dis(ob);
}
