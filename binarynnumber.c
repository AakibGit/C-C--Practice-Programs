#include<stdio.h>

int main()
{
	int r,n,base=1,b=0,ch;
	
	printf("enter number\n");
	scanf("%d",&n);
	printf("Enter 1 for decimal to binary\n");
	printf("Enter 2 for decimal to octal\n");
	printf("Enter 3 for decimal to hexadecimal\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			while(n!=0)
			{	
				r=n%2;
				b+=r*base;
				base*=10;
				n/=2;
			}
			printf("the binary number is %d",b);
			break;
		case 2:
			while(n!=0)
			{
				r=n%8;
				b+=r*base;
				base*=10;
				n/=8;
			}		
			printf("the octal number is %d",b);				
			break;
	}
	
	return 0;
}
