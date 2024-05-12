#include<stdio.h>
float area(int r);

int main()
{  
	int r;
	printf("enter the radius of circle ");
	scanf("%d",&r);
	
	printf("the area of circle is %f",area(r));
	
	return  0;
}

float  area(int r)
{
	float circle,pi=3.14;
	circle=pi*r*r;
	return circle;
}
