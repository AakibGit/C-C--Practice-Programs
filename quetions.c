#include<stdio.h>

int main()
{
	int i;
	char ch, name[25];
	puts("Enter string");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		ch=name[i];
		if(ch>='A' && ch<='Z')
		{
			name[i]+=32;
		}
		else if(ch>='a' && ch<='z')
		{
			name[i]-=32;
		}
		else if(ch==' ')
		{
			name[i]='*';
		}
		else if(ch>=0 || ch<=9)
		{
			name[i]='?';
		}
	}
	
	puts(name);
	
	
	return 0;
}
