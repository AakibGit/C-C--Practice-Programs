#include<stdio.h>

int dis();

int main()
{
	int arr[6],i;
	
	for(i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("the maximun number is %d",dis(arr,0));
}

int dis(int a[],int s)
{
	static int max;
	max=a[0];
	if(s<6)
	{
//		printf("elements %d : %d\n",s,a[s]);
		if(a[s]>max)
		{
			max=a[s];
		}
		dis(a,s+1);
	}
	return max;
}
