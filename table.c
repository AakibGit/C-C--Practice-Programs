#include<stdio.h>

int main()
{	
	int i,s=0,n;
	
	printf("Enter the table\n");	
	scanf("%d",&n);

	for(i=1;i<=10;i++)
	{
		s=s+n;
		printf("%d * %d = %d\n",n,i,s);
	}
	
	
	return (0);
}
