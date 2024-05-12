#include<stdio.h>

int check();

int main()
{
	int n;
	printf("enter number\n");
	scanf("%d",&n);

	
	printf("the occurence of number is %d",check(n));
	return 0;
}

int check(int n)
{
	int static c;
	
	if(n!=0)
	{
			c++;
		check(n%10);
		
	}
	return c;
}
