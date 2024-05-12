//#include<stdio.h>
//
//int fibo(int n);
//int main()
//{
//	int n;
//	puts("enter a number to display fibonacci series ");
//	scanf("%d",&n);
//	
//	printf("%d",fibo(n));
//	
//	return 0;
//}
//
//int fibo(int n)
//{
//	if(n==1 || n==0)
//	{
//		return 1;
//	}
//	else
//	{
//		printf("%d ",n);
//		return fibo(n-1) + fibo(n-2);
//	}
//}
#include<stdio.h>

int main()
{
	int i,a=0,b=1,c,n;
	
	puts("enter a number to display range of fibonacci series");
	scanf("%d",&n);
	printf("%d ",a);
	printf("%d ",b);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
	
}
