#include<stdio.h>

int fibo();

int main()
{
	int n;
	printf("enter number--");
	scanf("%d",&n);
	
	fibo(n);
	return 0;
}

int fibo(int n)
{
	static int a=0,b=1,c;
	
	if(n==1)
	{
		return n;
	}
	else
	{	c=a+b;
		a=b;
		b=c;
		printf("%d\t",c);
		fibo(n-1);
	}
}
