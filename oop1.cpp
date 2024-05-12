#include<iostream>
#include<string>

using namespace std;

class info
{
	private:
	int age;
	string name;
	int phone;
	public:
	void getinfo(int age1,string name1,int num)
	{
		age=age1;
		name=name1;
		phone=num;
		
		}
	void displayinfo()
	{
		cout<<"the age is "<<age<<endl;
		cout<<"the name is "<<name<<endl;
		cout<<"the mobile number is "<<phone<<endl;
			}		
};

int main()
{
	info s1,s2;
	
	s1.getinfo(20,"aakib",788213118);
	s2.getinfo(21,"usman",618212418);
	s1.displayinfo();
	cout<<endl;
	s2.displayinfo();
	
	
}

