#include<stdio.h>

int fact(int);

int main()
{
	int n;	
	
	printf("Enter  number\n");
	scanf("%d",&n);
	
	printf(" factorial number is %d ",fact(n));
	
	return 0;
}

int fact(int n)
{
	int i=1,f=1;
	
	for(i;i<=n;i++)
	{
		f*=i;
	}
	return f;
}
