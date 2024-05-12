#include<stdio.h>

int loop(int n);

int main()
{
	int n=0;
	loop(n);
	return 0;
}

int loop(int n)
{
	if(n<=10)
	{
		printf("%d\n",n);
		loop(n+1);
	}
}
