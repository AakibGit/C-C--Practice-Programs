#include<stdio.h>

int main()
{
	int i,j,f;
	
	for(i=1;i<=100;i++)
	{
		f=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{	
				f++;
			}
		}
			if(f==2)
			{
			printf("%d\n",i);
			}
	}
	
	return 0;
}
