#include<stdio.h>

int evenodd(int num);

int main()
{
	int num,r;
	printf("Enter number to  check even or odd");
	scanf("%d",&num);
	 	
	evenodd(num);
	
	return 0;
}

int evenodd(int num)
{
	for(num;num<=100;num++)
	{
		if(num%2==0)
	{
		printf("%d=Even\n",num);
	}
	else
	{
		printf("%d=odd\n",num);
	}
	
	}
	}
