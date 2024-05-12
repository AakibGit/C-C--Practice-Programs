#include<stdio.h>

int main()
{
	int a1[3][4],a2[4][3];
	int i,j,k,sum=0,mul[3][3];
	
	printf("Enter first matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a1[i][j]);
		}
	}
	
	printf("Enter second matrix\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a2[i][j]);
		}
	}	
	printf("after matrix mult\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<4;k++)
			{
				sum+=a1[i][k]*a2[k][j];
			}
			mul[i][j]=sum;
			sum=0;
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t ",mul[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
