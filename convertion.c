#include<stdio.h>

int main()
{
	int n;
	printf("enter decimal number\n");
	scanf("%d",&n);
	
	printf("%d number in octal %O\n",n,n);
	printf("%d number in hexadecimal %X\n",n,n);
	return 0;
}
