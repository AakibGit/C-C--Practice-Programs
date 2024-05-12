#include<stdio.h>

int main()
{
	int i,n,flag=0;
	
	printf("Enter number to check prime number\n");
	scanf("%d",&n);
	
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("prime number");
	}
	else
	{
		printf("not prime");
	}
	return 0;
}
