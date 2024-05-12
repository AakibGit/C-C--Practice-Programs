#include<stdio.h>

int dis();

int main()
{
	int arr[6],i;
	
	for(i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	dis(arr,0);
}

int dis(int a[],int s)
{
	if(s<6)
	{
		printf("elements %d : %d\n",s,a[s]);
		dis(a,s+1);
	}
	else
	return 0;
}
