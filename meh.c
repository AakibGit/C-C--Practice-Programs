#include<stdio.h>
int main()
{
	int a[3],i,n;
	
	printf("enter number for array size\n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
}
