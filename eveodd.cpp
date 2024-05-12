#include<stdio.h>

int main()
{
	int n;
	printf("Enter a number to check even or odd\n");
	scanf("%d",&n);
	
	(n%2==0)?printf("%d = even",n):printf("%d = odd",n);
	
	return 0;
}
