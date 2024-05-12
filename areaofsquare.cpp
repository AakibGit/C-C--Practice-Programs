#include<stdio.h>

int area(int a);

int main()
{
	int a,b;
	printf("Enter number");
	scanf("%d",&a);
	b=area(a);
	printf("the area of square is =%d",b);
	
	return 0;
}
int area(int a)
{
	int b;
	b=a*a;
	
	return b;
}
