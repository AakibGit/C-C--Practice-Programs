#include<stdio.h>

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);

int main()
{
	int a,b;
	char op;
	
	printf("Enter first number-->>");
	scanf("%d",&a);
	printf("Enter second number-->>");
	scanf("%d",&b);
	
	printf("choose operator +,-,/,*-->>");
	scanf("%c",&op);
	
	
	
	
	return 0;
}

int add(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
}

int mul(int a,int b)
{
	return a*b;
}

int div(int a,int b)
{
	return a/b;
}
