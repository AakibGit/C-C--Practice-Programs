#include<stdio.h>

int disp(int arr[],int n)
{
	if(n>4)
	{
		return 0;
	}
	else
	{
		printf("element in arr %d %d\n",n,arr[n]);
		return n + disp(arr,n+1);
	}
	
}

int main()
{
	int arr[5]={2,3,3,4,9};
	int n=0;
		disp(arr,n);
	
	return (0);
}
