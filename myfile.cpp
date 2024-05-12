#include<iostream>
#include<fstream>

using namespace std;

int main()
{

string text;

ifstream file("myfile.txt");

//ofstream file("myfile.txt");
//file<<"File Handling in C++";
//file<<"Next line ";

while(getline(file,text))
{
	cout<<text;
	
}
file.close();


 return 0;
}

