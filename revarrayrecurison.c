#include<stdio.h>

int revarr(int a[],int n);

int main()
{
	int i,n,arr[5];
	
	printf("enter a array limit 5:\n");
	scanf("%d",&n);
	
	printf("Enter array element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	revarr(arr,n);
	
}

int revarr(int a[] ,int n)
{
	if(n>=0)
	{
		
		printf("%d",revarr(a[n],n-1));
	}
}
