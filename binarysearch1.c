#include<stdio.h>

int main()
{
	int arr[5]={1,2,3,4,5},start=0,end=4,mid,key,found;
	printf("Enter a number\n");
	scanf("%d",&key);
	
	while(start<=end)
	{
		mid=start+end/2;
		
		if(arr[mid]==key)
		{
			found=mid;
//			printf("found key");
			break;
		}
		else if(arr[mid]<key)
		{
			start=mid+1;
		}
		else{
			end=mid-1;
		}
		
		
	}
	if(found==key)
	{
		printf("found key at %d",found);
		
	}
	else
	{
		printf("not found ");
	}
	return 0;
}
