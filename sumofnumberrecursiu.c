#include<stdio.h>

int sum(int n)
{
	if(n != 0)
	{
		return n+sum(n-1);
	}
	else
	return 0;
}

int main()
{
	int n;
	printf("enter a numbber : ");
	scanf("%d",&n);
	
	printf("%d",sum(n));
	
	
	return 0;
}