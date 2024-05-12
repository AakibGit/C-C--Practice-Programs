#include<stdio.h>

int main()
{
	int a,b,c;
	char op;
	printf("choose operator (*,/,-,+)\n");
	scanf("%c",&op);
	printf("enter a number first\n");
	scanf("%d",&a);
	printf("enter a number second\n");
	scanf("%d",&b);
	
	switch(op)
	{
		case '+':
			printf("%d",c=a+b);
			break;
		case '-':
			printf("%d",c=a-b);
			break;
		case '*':
			printf("%d",c=a*b);
			break;
		case '/':
			printf("%d",c=a/b);
			break;		
		default:
			printf("invalid number");
			break;		
	}
	
	return 0;
}
