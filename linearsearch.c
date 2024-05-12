#include<stdio.h>

int main()
{
	int arr[5],i,key,pre;
	
	printf("Enter 5 number in array: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter a number to check it is present in array or not :");
	scanf("%d",&key);

for(i=0;i<5;i++)
	{
		if(arr[i]==key)
		{
			pre=i;
		}
	}
		printf("found at index %d in array number is %d ",pre,key);
	
//		if(arr[i]==key)
//		{
//			printf("at intdex %d present in array\n",i);
//		}
//		else
//		{
//			printf("Not present in array\n");
//		}
//	
	return 0;
}
