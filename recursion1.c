#include<stdio.h>

int eveodd(int n,int y)
{
	if(y<=n)
	{
		printf("%d\t",y);
		eveodd(n,y+2);
	}
}

int main()
{
	int n,y=1;

	printf("Enter a range number to check even odd\n");
	scanf("%d",&n);
		
		printf("All odd number from 1 to %d \n",n);
		eveodd(n,1);
		printf("\nAll even number from 1 to %d \n",n);
		eveodd(n,2);
		
	return 0;
}
