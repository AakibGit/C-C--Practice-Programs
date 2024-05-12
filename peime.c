#include<stdio.h>

int main()
{
	int i,f=0,n;
	
	printf("Enter a number to check prime: ");
	scanf("%d",&n);
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			f=1;
			break;
		}
	}
	if(f==0)
	{
		printf("prime number");
	}
	else
	printf("not a prime number");
	return 0;
}
