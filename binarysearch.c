#include<stdio.h>

int main()
{
	
	int arr[5]={1,2,3,4,5},i,s,e,m,key;
	s=0; e=4; 
	
	printf("enter a number to check in array:\n");
	scanf("%d",&key);
	
	
	while(s<=e)
	{
		m=s+e/2;
		if(arr[m]==key)
		{
			printf("found");
			break;
		}
	}
	
	return 0;
}
