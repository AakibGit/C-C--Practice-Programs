#include<stdio.h>

int main()
{
	int n,i,sum=0;
	printf("Enter Nummber\n");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(n==sum)
	{
		printf("Perfect Number\n");
	}
	else
	{
		printf("Not A Perfect Number\n");
	}
	return 0;
}
