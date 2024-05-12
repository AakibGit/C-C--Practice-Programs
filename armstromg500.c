#include<stdio.h>

int main()
{
	int s,i,arm,r;
	
	for(i=1;i<=500;i++)
	{	s=i;
		arm=0;
		while(s>0)
		{
			r=s%10;
			arm+=r*r*r;
			s=s/10;
		}
		if(i==arm)
		{
			printf("%d\n",arm);
		}
		
	}
}
