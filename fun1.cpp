#include<stdio.h>

int add(int a,int b);

int main()
{
	int a,b,c;
	printf("Enter the value of a&b:");
	scanf("%d%d",&a,&b);
	c=add(a,b);
	printf("c=%d",c);
	
	return 0;
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
