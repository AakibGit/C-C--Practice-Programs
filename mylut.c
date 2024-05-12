#include<stdio.h>

int main()
{
	int a1[3][3],a2[3][3],i,j,k,sum=0,mul[3][3];
	
	printf("Enter first matrix element\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a1[i][j]);
		}
	}
	printf("Enter second matrix element\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a1[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d %d %d\n",i,j,k);
//				sum+=a1[i][k]*a2[k][j];
			}
			printf("\n");
//			mul[i][j]=sum;
//			sum=0;
		}
			printf("\n");
	}
	
	printf("after multiplycation\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
	
	return 0;
	
}
