#include<stdio.h>
int main()
{
	int i,j,arr[10]={4,3,1,2,6,8,7,9,10};
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			int temp=0;
			
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
