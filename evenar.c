#include<stdio.h>

int main()
{
	int i,arr[5],sum=0;
	
	printf("Enter five element in array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
			sum+=arr[i];
		}
	}
	printf("The sum of even number in array %d",sum);
	
	return 0;
}
