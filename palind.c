#include<stdio.h>

int main()
{
	int r,c,n,pal=0;
	printf("Enter numbers: ");
	scanf("%d",&n);
	c=n;
	
	while(n>0)
	{
		r=n%10;
		pal=r+(pal*10);
		n=n/10;
	}
	if(c==pal)
	{
		printf("palindrone");
		
	}
	else
	{
		printf("not palindrone");
	}
}
