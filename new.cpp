#include<iostream>
#include<fstream>

using namespace std;

int main()
{

string var;

ifstream file;

file.open("new.txt");

ofstream file("new.txt",ios::app);

file<<endl<<"Append mode in c++ "<<endl;

while(getline(file,var))
{
	
cout<<var<<endl;

}

file.close();

 return 0;
}

