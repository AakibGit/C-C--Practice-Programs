#include<stdio.h>

int main()
{
	int i,siz,arr[100],max;
	
	printf("enter size of array:");
	scanf("%d",&siz);
	
	for(i=0;i<siz;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	max=arr[0];
	
	for(i=0;i<siz;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		printf("%d\t",arr[i]);
	}
	
	printf("the maximum number in arrray is %d",max);
	
	
	return 0;
}
