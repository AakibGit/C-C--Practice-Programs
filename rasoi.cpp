#include<stdio.h>

int main()
{
	int i,ra,arr[5]={70,100,100,70,70};
//	char str[100]={"biryani","keemma-pav","dalcha","bread-halwa","pav-baji"};  // wrong syntax;
	printf("welcome to sameena rasoi\n");
	
	printf("enter 1 for menu");
	scanf("%d",&ra);
	
	switch(ra)
	{
		case 1:
			for(i=0;i<5;i++)
			{
			printf("%d\n",arr[i]);	
			}
			
			break;
		default:
			printf("invalid numbr");
			break;	
	}
	
	return 0;
}
