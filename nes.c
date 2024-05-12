#include<stdio.h>

int main()
{
	int i,j,lines;
	char ch='*';
	
	printf("Enter number of lines");
	scanf("%d",&lines);
	
	for(i=0;i<=lines;i++)
	{
		printf("\n");
		for(j=0;j<i;j++)
		{
			printf("%c",ch);
		}
	}
	
	
	return 0;
}
