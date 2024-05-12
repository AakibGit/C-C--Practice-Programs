#include<stdio.h>

int main()
{
	int r,n,p;
	
	printf("enter number\n");
	scanf("%d",&n);
	
	p=n;
	
	while(n!=0)
	{
		r=r*10+n%10;
		n=n/10;
	}
	
	if(r==p)
	{
		printf("palindrone number\n");
	}
	else
	{
		printf("not palindrone number\n");
	}
	return 0;
}
