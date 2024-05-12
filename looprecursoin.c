#include<stdio.h>

int loop(int n);

int main()
{
	int n=10;
	loop(n);
	return 0;
}

int loop(int n)
{
	if(n>=0)
	{
		printf("%d\n",n);
		loop(n-1);
	}
}
