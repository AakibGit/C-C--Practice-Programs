#include<stdio.h>
int square();
int circle();
int rectangle();

int main()
{	//calling function sqaure
	printf("Programme of Area of Square\n");
	square();
	printf("\n");
	
	//calling function circle
	printf("Programme of Area of Circle\n");
	circle();
	printf("\n");
	
	//calling function rectangle
	printf("Programme of Area of Rectangle\n");
	rectangle();
	
	return 0;
}

int square()
{
	int side ,area;
	
	printf("Enter the lenght of side\n");
	scanf("%d",&side);
	
	area=side*side;
	printf("Area of sqaure is %d\n",area);
}

int circle()
{
		float radius,area;
	printf("Enter the radius of circle\n");
	scanf("%d",&radius);
	area=3.14*radius*radius;
	printf("Area of circle is %d\n",area);
}
int rectangle()
{
	  int length, breadth, area;
 
   printf("\nEnter the Length of Rectangle : \n");
   scanf("%d", &length);
 
   printf("\nEnter the Breadth of Rectangle : \n");
   scanf("%d", &breadth);
 
   area = length * breadth;
   printf("\nArea of Rectangle : %d\n", area);
 
}
