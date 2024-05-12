#include<stdio.h>

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);

int main()
{
	int a,b,c,d,e,f;
	printf("Values");
	scanf("%d %d",&a,&b);
	
	c=add(a,b);
	d=sub(a,b);
	e=mul(a,b);
	f=div(a,b);;
	
	printf("\n add=%d",c);
	printf("\n sub=%d",d);
	printf("\n mul=%d",e);
	printf("\n div=%d",f);
	
	
	return 0;
}

int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}

int sub(int a,int b)
{
	int c;
	c=a-b;
	return c;
}

int mul(int a,int b)
{
	int c;
	c=a*b;
	return c;
}

int div(int a,int b)
{
	int c;
	c=a/b;
	return c;
}

