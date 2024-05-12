#include<stdio.h>

int mult(int x,int y)
{
	if(y==0)
	{
		return 0;
	}
	else
	{
		return x+mult(x,y-1);
	}
}
int main()
{
	int x,y,prod;
	printf("enter two numbr");
	scanf("%d %d",&x,&y);
	
	prod=mult(x,y);
	printf("The multipication of two number is %d",prod);
}
