#include<stdio.h>

int main()
{
	int arr1[3][3],arr2[3][3],mul[3][3],i,j,k,sum=0;
	
	printf("Enter first matrix\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	
	printf("Enter second matrix\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	
	printf("first matrix\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	
	printf("second matrix\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				sum+=arr1[i][j]*arr2[j][k];
			}
			mul[i][j]=sum;
			sum=0;
			
		}
	}
	printf("Multiplycation of matrix\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
}
