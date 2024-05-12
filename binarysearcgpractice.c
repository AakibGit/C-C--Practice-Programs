#include<stdio.h>

int main()
{
	int arr[5]={1,2,3,4,5},i,j,start,end,mid,search;
	
	start=0;
	end=4;
	
		printf("Enter a number to search in array: ");
		scanf("%d",&search);
		
	for(i=0;i<5;i++)
	{
		mid=start+end/2;
		if(arr[mid]==search)
		{
			printf("found at %d",mid);
		}
		else if(arr[mid]<)
	}
//	printf("Enter 5 number in array: ");

//	for(i=0;i<5;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
	
	

	
	return 0;
}
