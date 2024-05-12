#include<iostream>

using namespace std;

int main()
{
//	Without  recusrion

 int i,a=0,b=1,c,n;
 
 cout<<"Enter a for number of series "<<endl;
 cin>>n;
 
 cout<<a<<" "<<b<<" ";
 
 for(i=1;i<=n;i++)
 {
 	c = a + b;
 	a = b;
 	b = c;
 	
 	cout<<c<<" ";
 }

 return 0;
}

