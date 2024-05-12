#include<stdio.h>

int main()
{
	int r,r1=0,n;
	
	printf("Enter number\n");
	scanf("%d",&n);
	
	while(n!=0)
	{
		r=n%10;
		r1=r+(r1*10);
		n=n/10;
	}
	
	while(r1!=0)
	{
		r=r1%10;
		
		r1=r1/10;
		
		switch(r)
		{
			case 0:
				printf("zero-");
				break;
			case 1:
				printf("one-");
				break;
			case 2:
				printf("two-");
				break;	
			case 3:
				printf("three-");
				break;	
			case 4:
				printf("four-");
				break;		
			case 5:
				printf("five-");
				break;	
			case 6:
				printf("six-");
				break;	
			case 7:
				printf("seven-");
				break;	
			case 8:
				printf("eight-");
				break;	
			case 9:
				printf("nine-");
				break;	
		}
	}
	return 0;
}
