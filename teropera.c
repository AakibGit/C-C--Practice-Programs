#include<stdio.h>

int main()
{
	
	int age;
	printf("Enter you age ");
	scanf("%d",&age);
	
//	if(age>=18)
//	{
//		printf("eligible ");
//	}
//	else 
//	{
//		printf("not eligible");
//	}

	(age>=18)?printf("eligible"):printf("not eligible");
	
	
	return 0;
}
