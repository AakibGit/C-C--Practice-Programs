#include<stdio.h>

int main()
{	int n,arm,i,t,a;
	printf("printing armstrong number from 1-500\n");
	for(i=1;i<=500;i++)
	{	t=i;
		arm=0;
		while(t!=0)
		{	a=t%10;
			arm += a*a*a;
			t=t/10;
		}
		if(arm==i)
		printf("%d\n",i);
			
	}	
}
