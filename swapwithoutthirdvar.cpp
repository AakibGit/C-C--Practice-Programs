#include<iostream>

using namespace std;

int main()
{

int x, y;

x=10;
y=5;

cout<<"Before "<<x<<endl;
cout<<"Before "<<y<<endl;

x = x + y;
y = x - y;
x = x - y;

cout<<"After "<<x<<endl;
cout<<"After "<<y<<endl;

 return 0;
}

