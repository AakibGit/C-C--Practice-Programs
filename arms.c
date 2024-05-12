#include<stdio.h>

int main()
{
	int c,r,n,pal=0;
	
	printf("enter a number\n");
	scanf("%d",&n);
	c=n;
	
	while(n>0)
	{
		r=n%10;
		pal=pal+r*r*r;
//		pal=r+pal*10;
//		printf("%d",r);
		n=n/10;
	}
//	printf("%d\n",pal);
	if(pal==c)
	{
		printf("armstrong\n");
	}
	else
	{
		printf("not armstrong");
	}
	
}
