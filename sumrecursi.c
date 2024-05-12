#include<stdio.h>

int sum(int n)
{
	if(n<1)	
	{
		return n;
	}
	else
	{
		return n+sum(n-1);
	}
}

int main()
{
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	
	printf("%d",sum(n));
	
	
}
