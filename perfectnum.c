#include<stdio.h>

int main()
{
	int i,no,sum=0;
	
	printf("enter number to check perfect number\n");
	scanf("%d",&no);
	
	for(i=1;i<no;i++)
	{
		if(no%i==0)
		{
			printf("the number which divided %d\n",i);
			sum+=i;
		}		
	}
	printf("\n");
	printf("after divide the sum of number %d\n\n",sum);
	
	if(sum==no)
	{
		printf("perfect number\n");
	}
	else
	{
		printf("no perfect number");
	}
	
//	printf("%d",sum);
	
	return 0;
}
