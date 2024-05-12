#include<stdio.h>

struct stru
{	
	int age;
    char name[30];
	int mob;
	
};

int main()
{
	int i;
	struct stru s1[5];
	s1[5].age;
	s1[5].name;
	
	for(i=0;i<5;i++)
	{
	printf("enter your name:\n");
	scanf("%s",s1[i].name);

	}
	for(i=0;i<5;i++)
	{
	printf("your name is:%s\n",s1[i].name);

	}

	//	for(i=0;i<5;i++)
//	{
//	printf("enter your age:\n");
//	scanf("%d",&s1[i].age);
//
//	}
//	for(i=0;i<5;i++)
//	{
//	printf("your age is :%d\n",s1[i].age);
//
//	}

	}
