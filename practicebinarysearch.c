#include<stdio.h>

int main()
{
	int arr[5]={1,2,3,4,5};
	int s=0,e=9,mid,key;
	
	printf("Enter a number to search in array\n");
	scanf("%d",&key);
	
	
	while(s<e)
	{
		mid=s+e/2;
		if(arr[mid]==key)
		{
			printf("present\n");
			break;
		}
		else if(arr[mid]<key)
		{
			mid=s-1;
		}
		else
			mid=e+1;
	}
	
	return 0;
}
