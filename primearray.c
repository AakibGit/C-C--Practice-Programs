#include<stdio.h>

int main()
{	
	int array[50],i,siz,c=0;
	printf("enter array size------>>>");
	scanf("%d",&siz);
	
	for(i=0;i<siz;i++)
	{
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<siz;i++)
	{
		if(array[i]%i==0)
		{
			c++;
		}	
	}
	if(c==2)
	printf("prime number");

//	int n,i,c=0;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		if(n%i==0)
//		{
//			c++;
//		}
//	}
//	if(c==2)
//	printf("prime");
}
