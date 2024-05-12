#include<Stdio.h>

int main()
{
	int n,j;
	printf("Enter the no:-\n");
	scanf("%d",&n);
	
	printf("\n");
	printf("Reverse of the number is ..");
	while(n>0)
	
	{
		j=n%10;
		printf("%d",j);
		n=n/10;
	}
	
}
