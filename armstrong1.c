#include<stdio.h>

int main()
{
	int r,c,n,arm=0;
	printf("Enter number: ");
	scanf("%d",&n);
	c=n;
	
	while(n>0)
	{
		r=n%10;
		arm+=(r*r*r);
		n/=10;
	}
	if(c==arm)
	{
		printf("armstrong");
		
	}
	else
	{
		printf("not armstrong");
	}
}
	
