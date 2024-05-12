#include<stdio.h>

int main()
{
	int n,a,b,c,d,e,f;
	printf("enter rupess");
	scanf("%d",&n);
	
	a=n%100;
	b=n/100;
	printf("hundred %d\n",b);
	c=b%50;
	d=b/50;
	printf("fifty %d\n",d);
	e=d%10;
	f=d/10;
	printf("ten %d\n",f);
}
