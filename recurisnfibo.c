#include<stdio.h>

int fibo(int n);

int main()
{
	int n;
	puts("enter a number: ");
	scanf("%d",&n);
	
//	printf("displaying fibonacci series\n");
	printf("%d",fibo(n-2));
	
	return (0);
}
int fibo(int n)
{	int a=0,b=1,c;
//	printf("%d ",a);
//	printf("%d ",b);
	if(n>0)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
		fibo(n-1);
	}
	
	
}
