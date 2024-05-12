#include<stdio.h>

int main()
{
	
	int r,n,base=1,d=0;
	
	printf("enter binary number\n");
	scanf("%d",&n);
	
	while(n!=0)
	{
		r=n%10;
		d=d+r*base;
		n=n/10;
		base=base*2;
		
	}
	printf("the decimal form is %d",d);
	
}
