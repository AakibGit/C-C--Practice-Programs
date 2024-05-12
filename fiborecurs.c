#include<stdio.h>

int fibo(int n)
{
	static int a=0,b=1,c;
	
	if(n==1 || n==0)
	{
		return n;
	}
	else
	{	c=a+b;
		a=b;
		b=c;
		printf("%d\t",c);
		fibo(n-1);
//		return fibo(n-1) + fibo(n-2);
	}
		
}

int main()
{
	int n;
	printf("enter number to print fibonacci series to go\n");
	scanf("%d",&n);
	
	fibo(n);
}
