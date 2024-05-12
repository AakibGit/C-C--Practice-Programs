#include<stdio.h>

int main()
{
	int ar[10],i,j;
	printf("Enter array elements\n");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&ar[i]);
	}
	
	printf("\n");
	
	for(i=0;i<10;i++)
	{
		int prime=0;
		for(j=2;j<ar[i];j++)
		{
			if(ar[i]%j==0)
			{
				 prime=1;
				 break;
			}
		}
		if(prime==0)
		{
			printf("%d\n",ar[i]);
		}
	}
	return 0;
}
