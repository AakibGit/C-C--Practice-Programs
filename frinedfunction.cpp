#include<iostream>

using namespace std;

class children
{
	public:
		int child_id;
		string name;
		
		void get(int id ,string child_name)
		{
			child_id = id;
			name = child_name;	
		}	
		
		void display()
		{
			cout<<"The Children id is "<<child_id<<endl;
			cout<<"The Children Name is "<<name<<endl;
		}
		
};

class teacher
{
	private:
		int teacher_id;
		string teacher_name;
		
		void get(int id,string name)
		{
			teacher_id = id;
			teacher_name = name;
		}
		
		void display()
		{
			cout<<"The Teacher id is "<<teacher_id<<endl;
			cout<<"The Teacher Name is "<<teacher_name<<endl;
		}
		
};
		
int main()
{

	children c;
	teacher t;
	
	c.get(10,"name");
	c.display();
	
 return 0;
}

