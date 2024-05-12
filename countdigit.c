#include<stdio.h>

int count(int n)
{	
	static int c=0;

	if(n!=0)
	{
		c++;
		 count(n/10); 	
	}
	
	return c;
}
int main()
{
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	printf("%d",count(n));
//	while(n>0)
//	{
//		r=n%10;
//		c++;
//		n=n/10;
//	}
//	printf("You entered %d digit",c);
}
