#include<stdio.h>

int main()
{
	char name[20];
		int a;
	
	while(true)
	{
		printf("Enter 1 for continue \nEnter 2 to stop: ");
		scanf("%d",&a);
		printf("______________________________________\n");
		if(a==2)
		{
			break;
		}
		else
		{
			printf("Enter name: ");
			scanf("%s",&name);
			printf("%s\n",name);
			printf("______________________________________\n");
		}
		
	}
}
