#include<stdio.h>

int main()
{
	int arr[5],i,j;
	
	printf("Enter 5 number in array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Array you entered is \n");
	
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			int temp;
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nArray after sorting order is \n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
