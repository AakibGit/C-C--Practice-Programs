#include<stdio.h>

int main()
{
	
	int i,j,k,sum=0;
	int arr1[2][2]={{1,2},{1,2}},arr2[2][3]={{1,2,3},{1,2,3}},mul[2][3];
	
	printf("first matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	printf("second matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}


	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<2;k++)
			{
//				sum+=arr1[i][k]*arr2[k][j];
				printf("%d %d %d\n",i,j,k);
			}
//			mul[i][j]=sum;
//			sum=0;
			printf("\n");
		}
			printf("\n");
	}
	
//	printf("multiplycation of  matrix\n");
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%d\t",mul[i][j]);
//		}
//		printf("\n");
//	}
	return 0;
}
