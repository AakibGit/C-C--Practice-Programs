#include<stdio.h>

int main()
{
	int i,f=0,n;
	
	printf("Enter a number to check prime: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			f++;
		}
	}
	if(f==2)
	{
		printf("prime number");
	}
	else
	printf("not a prime number");
	return 0;
}
