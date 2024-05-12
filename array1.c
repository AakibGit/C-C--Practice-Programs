
#include<stdio.h>

int linearsearch(int arr[],int n,int key,int i)
{
	int store;
		if(i<10)
		{
			if(arr[i]==key)
			{
				store=arr[i];
				return printf("%d found ",store);	
				
			}
			else {
				return printf("Not found in array\n");
			}
//			printf("%d\n",i);
			linearsearch(arr,n,key,i+1);
		}
//		printf("%d\t",n);
//			printf("match at %d\n",store);

//			return n;
//		else
//		{
			//		}
		
	
}

int main()
{
	int n,i=0,key;
	printf("Enter array size you want\n");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter array  element till %d:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter a number to check it present in array or not\n");
	scanf("%d",&key);
	
//	printf("%d",);
	linearsearch(arr,n,key,i=0);
	return 0;
}
