#include<stdio.h>

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);

int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	
	printf("the sum is %d\n",add(x,y)); 
	printf("the sum is %d\n",sub(x,y)); 
	printf("the sum is %d\n",mul(x,y)); 
}

int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
