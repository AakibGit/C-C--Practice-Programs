#include<stdio.h>

int main()
{
	
	int n,i,s=0;
	
	printf("Enter number for multiplication: ");
	scanf("%d",&n);

	printf("%d * 1 = %d\n",n,n);
	for(i=2;i<=10;i++)
	{	s=s+n;
		
		printf("%d * %d = %d\n",n,i,n+s);
	}
	
	return (0);
}
