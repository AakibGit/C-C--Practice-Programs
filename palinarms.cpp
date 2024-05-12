#include<stdio.h>

int palindrone(int n);
int armstrong(int n);
int reverse(int n);

int main()
{
	int n,op;
	printf("enter a number---->>");
	scanf("%d",&n);
	
	printf("choose 1:for palindrone number \n");
	printf("choose 2:for armstrong number \n ");
	printf("choose 3:to reverse a number \n");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
			palindrone(n);
			break;
		case 2:
			armstrong(n);
			break;
		case 3:
			reverse(n);
			break;	
		default:
			printf("invalid number ");
			break;	
	}
	return 0;


}

int palindrone(int n)
{
	int r,c,pal=0;
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

int armstrong(int n)
{
	int r,c,arm=0;
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

int reverse(int n)
{
	int r;
	
	while(n>0)
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
		
	}
}
