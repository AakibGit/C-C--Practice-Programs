#include<stdio.h>

int main()
{
	int i,n,prime=0;
	
	printf("enter number\n");
	scanf("%d",&n);
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			prime=1;
			break;		
		}	
	}
	
	if(prime==0)
	{
		printf("prime number\n");
	}
	else
	{
		printf("not prime number\n");
	}
	return 0;
}
