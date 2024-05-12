#include<stdio.h>

int main()
{
	int i,t,j=2,flag=0;
	
		for(i=1;i<=100;i++)
		{
			i=t;
			while(j<=t)
			{
				if(t%i==0)
				{
					flag=1;
				}	
				j++;
			}
			
				if(flag==0)
				{
					printf("%d : prime number",t);
				}
			
		}
	
	return 0;
}
