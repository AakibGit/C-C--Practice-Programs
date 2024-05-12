#include<stdio.h>

int main()
{
	int i,arr[5];
	
	printf("Enter five element in array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	return 0;
}
