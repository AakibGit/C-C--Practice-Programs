#include<stdio.h>

int main()
{
	int i,sum=0,n;
	
	printf("enter number\n");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;			
		}
	}
	
	if(sum==n)
	{
		printf("perfect number\n");
	}
	else
	{
		printf("not perfect number\n");
		
		}	
	return 0;
}
