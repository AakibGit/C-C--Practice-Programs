#include<stdio.h>

int main()
{
	int i;
	char name[15];
	
	for(i=0;i<15;i++)
	{
		scanf("%s",&name[i]);
	}
	
	
	printf("%s",name);

	return 0;
}
