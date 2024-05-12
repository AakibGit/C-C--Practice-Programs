#include<stdio.h>

int main()
{
	int c;
	char h,n[20];
	printf("enter name\n");
	gets(n);
	
	for(c=0;n[c]!='\0';c++)
	{
		h=n[c];
		if(h>='A' && h<='Z')
		{
			n[c]=n[c]+32;
		}
		else if(h>='a' && h<='z')
		{
			n[c]=n[c]-32;
		}
		else if(n[c]==' ')
		{
			n[c]='*';
		}
		else if(n[c]>=0 || n[c]<=9)
		{
			n[c]='?';
		}
	}
	puts(n);
}
