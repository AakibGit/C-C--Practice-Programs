#include<stdio.h>

int main()
{
	int arr[10],i,j;
	
	printf("enter elements\n");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<10;i++)
	{
		int prime=0;
		for(j=2;j<arr[i];j++)
		{
			if(arr[i]%j==0)
			{
				prime=1;
				break;
			}
		}
		if(prime==0)
		{
			printf("prime number %d\n",arr[i]);
		}
	}
}
