#include<stdio.h>

int main()
{
	int r,n,arm=0,s;
	
	printf("enter number\n");
	scanf("%d",&n);
	
	s=n;
	
	while(n!=0)
	{
		r=n%10;
		arm+=r*r*r;
		n=n/10;
	}
	
	if(arm==s)
	{
		printf("armstrong number\n");
	}
	else
	{
		printf("not armstrong number\n");
	}
	return 0;
}
