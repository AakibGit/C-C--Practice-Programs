#include<stdio.h>

int basepow(int b,int p);

int main()
{
	int b,p;
	
	printf("enter base ");
	scanf("%d",&b);
	
	printf("enter power ");
	scanf("%d",&p);
	
	printf("%d",basepow(b,p));
	return 0;
}

int basepow(int b,int p)
{
	
	if(p != 0)
	{
		return b*basepow(b,p-1);
	}
	else
	{
		return (1);
	}
}
