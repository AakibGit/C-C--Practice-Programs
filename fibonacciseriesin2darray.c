#include<stdio.h>

int main()
{
	int a[2][3],i,j,k;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			int a1=0,b=1,c;
			
			for(k=1;k<=a[i][j];k++)
			{
				c=a1+b;
				a1=b;
				b=c;
				printf("%d\t",c);
			}
			printf("\n");
		}
//		printf("\n");
	}
	
	return 0;
}
