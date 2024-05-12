#include<stdio.h>

int main()
{
	int i,j,arr[3][4];
	
	printf("enter a 2-4 matrix\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("displaying 2d array\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
