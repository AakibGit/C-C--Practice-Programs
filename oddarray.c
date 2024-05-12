#include<stdio.h>

int main()
{
	int sum=0,i,array[50],siz;
	printf("enter array size------>>>");
	scanf("%d",&siz);
	
	for(i=0;i<siz;i++)
	{
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<siz;i++)
	{
		if(array[i]%2!=0)
		{
			sum+=array[i];
		}
	}
	printf("%d",sum);
	
}
