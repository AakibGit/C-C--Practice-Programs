#include<stdio.h>

int add(int a,int b);


int main()
{
	printf("%d",add(3,5));
	return 0;
}


int add(int a, int b) {
	return a + b;
}

