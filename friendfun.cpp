#include<iostream>

using namespace std;

class teacher
{
	private:
		
		void set(string name)
		{
				cout<<name<<endl;
		}
		
	friend void get(teacher t);
};

void get(teacher t)
{
	t.set("c++");	
}

int main()
{
	teacher t;
	
	get(t);
	
 return 0;
}

