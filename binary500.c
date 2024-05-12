#include<stdio.h>

int main()
{
	long long int c,base=1,i,d=0,r,r1,b=0;
	
	for(i=1;i<=5;i++)
	{
		c=i;
		while(c>0)
		{
			r=c%2;
			d=d+r*base;
			c=c/2;
			base=base*10;
		}
		printf("%llld=%llld\n",i,d);	
	}
}

