#include<stdio.h>

int fact(int n);

int main()
{
	int n;
	puts("enter a number to find factorial");
	scanf("%d",&n);
	
	printf("%d",fact(n));
	
	return (0);
}

int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
