#include<stdio.h>

int main()
{
	int cp,sp;
	
	printf("Enter cost price\n");
	scanf("%d",&cp);
	
	printf("Enter selling price\n");
	scanf("%d",&sp);
	
	if(cp>sp)
	{
		printf("loss %d",cp-sp);
	}
	else if(sp>cp)
	{
		printf("profit %d",sp-cp);
	}
	else if(sp==cp)
	{
		printf("No profit No loss");
	}
	
	return 0;
}
