#include<stdio.h>

pattern(int i)
{
	int j=1;
	if(i<=5)
	{
		if(j<=i)
		{
			printf("%d",j);
			pattern(i+1);
			j++;
			
		}
		pattern(i+1);
		printf("\n");
		i++;
	}
}
int main()
{
	pattern(1);
}

