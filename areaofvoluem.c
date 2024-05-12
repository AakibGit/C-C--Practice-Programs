#include<stdio.h>

int main()
{
	int r,h;
	float s_area,vol;
	
	printf("Enter vlaue for radius and height of a cylinder\n");
	scanf("%d %d",&r,&h);
	
	s_area=2*(22/7)*r*(r+h);
	vol=2*r*r*h;
	
	printf("surface area of cylinder is %f\n",s_area);
	printf("volumne area of cylinder is %f",vol);
	
	
	
	return 0;
}
