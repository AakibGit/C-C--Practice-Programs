#include<stdio.h>

int dis(int x)
{
	if(x > 0)
	{
		
		printf("funtion in stack %d\n",x);
		dis(x-1);

	}
	else
	{
		return x;
	}
}

int main()
{
	int n=10;
		
		dis(n);
	return (0);
}
