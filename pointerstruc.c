#include<stdio.h>
#include<string.h>

struct demo
{
	int age;
	int id;	
	char name[20];
};

int main()
{
	struct demo *ptr,c={20,1,"aakib"};
	struct demo c1;
	ptr=&c;
	c1=c;
//	c.age=20;
//	c.id=1;
//	c.name="aakib";
//	strcpy(c.name,"aakib");
//	
	printf("%d\n",c.age);
	printf("%d\n",c.id);
	printf("%s\n",c.name);
	
	printf("copied sucessfully\n\n");
	printf("%d\n",c1.age);
	printf("%d\n",c1.id);
	printf("%s\n",c1.name);

		printf("Accessing values using pointer\n\n");
	printf("%d\n",ptr->age);
	printf("%d\n",ptr->id);
	printf("%s\n",ptr->name);
}
