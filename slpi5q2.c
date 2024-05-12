#include<stdio.h>

int main()
{
	char str[20];
	int i;
	
	printf("Enter string\n");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]+=32;
		}
		else if(str[i]>='a' && str[i]<='z')
		{
			str[i]-=32;
		}
		else if(str[i]==' ')
		{
			str[i]='*';
		}
		else if(str[i]>=0 || str[i]<=9)
		{
			str[i]='?';
		}
	}
	puts(str);
	return 0;
}
