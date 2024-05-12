#include<stdio.h>

int main()
{
	int i,fact=1,n;
	
	printf("enter number\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	
	printf("the factorial is %d",fact);
	
	return 0;
}
