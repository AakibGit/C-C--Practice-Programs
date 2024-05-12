#include<iostream>
#include<fstream>

using namespace std;

int main()
{

string name;
int rn ;

	
ofstream file;

file.open("info.txt",ios::app);


cout<<"Enter youe name "<<endl;
getline(cin,name);

cout<<"Enter your Roll no "<<endl;
cin>>rn;

file<<"The Name of Student is "<<name<<endl;
file<<"The Roll no of Student is "<<rn<<endl;


file.close();


 return 0;
}

