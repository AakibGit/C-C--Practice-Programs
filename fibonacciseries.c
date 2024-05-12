#include<stdio.h>

int fib();

int main()
{
	int n;
	printf("enter range\n");
	scanf("%d",&n);
	
	printf("%d",fib(n));
	 
}

int fib(int n)
{
	if(n<=1)
	{
		return n;
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}
}
