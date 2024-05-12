#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int x,x1,y,y1,distance;
	
	cout<<"Enter x "<<endl;
	cin>>x; 
	
	cout<<"Enter x1 "<<endl;
	cin>>x1;
	
	cout<<"Enter y "<<endl;
	cin>>y;
	
	cout<<"Enter y1 "<<endl;
	cin>>y1;

	distance = ((x-x1)*(x-x1))+((y-y1)*(y-y1));
	
	cout<<"The distance between is "<<sqrt(distance)<<endl;
	
	
 return 0;
}

