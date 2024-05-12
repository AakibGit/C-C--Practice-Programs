#include<Stdio.h>

int main()
{
	int i,j,k=1;
	int range;
	
	printf("Enter the range");
	scanf("%d",&range);
	printf("FLOYD's TRIANGLE:\n");
	
	for(i=1;i<=range;i++)
	{
		for(j=1;j<=i;j++,k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	return 0;
}
