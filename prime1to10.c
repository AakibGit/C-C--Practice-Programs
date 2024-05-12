#include<stdio.h>

int main()
{
	int i,j,t,flag=0;
	
	for(i=1;i<=100;i++)
	{
		t=i;
		for(j=2;j<=t-1;j++)
		{
			if(t%j==0)
			{
				flag=1;	
			}	
		}
		if(flag==0)
		{
			printf("%d prime number\n",t);
		}
		else
		{
			printf("%d not prime number\n",t);
		}
	}
	
	return 0;
}
