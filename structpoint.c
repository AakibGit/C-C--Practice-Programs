#include<stdio.h>

struct person
{
	int age;
	float weight;
		
};

int main()
{
	struct person *personptr,person1;
	personptr=&person1;
	
	printf("Enter age:\n");
	scanf("%d",&personptr->age);
	
	
	printf("Enter weight:\n");
	scanf("%f",&personptr->weight);
	
	printf("displaying \n");
	printf( "age:%d\n",personptr->age);
	printf( "weight:%f\n",personptr->weight);
	
	
}
