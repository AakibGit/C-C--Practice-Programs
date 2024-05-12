#include<stdio.h>
//#include<string.h>

struct employee
{

	int id;
	char name[30];
	int salary;
		
}info[4];

int main()
{
	int i,choi;
	
	for(i=1;i<4;i++)
	{
		printf("Enter [%d] employee detail\n ",i);
		printf("Enter your id\n");
		scanf("%d",&info[i].id);
		printf("Enter your name\n");
		scanf("%s",&info[i].name);
		printf("Enter your salary\n");
		scanf("%d",&info[i].salary);
		printf("\n");
	}
	printf("\n");
	for(i=1;i<4;i++)
	{
		printf("Displaying employee [%d] detail\n",i);
		printf("your id is %d\n",info[i].id);
//		scanf("%d",&info[i].id);
		printf(" your name is %s\n",info[i].name);
//		scanf("%s",&info[i].name);
		printf(" your salary is %d\n",info[i].salary);
		printf("\n");
//		scanf("%d",&info[i].salary);
	}
//		for(i=0;i<3;i++)
//		{
		printf("Search emmployee id and display detail\n");
		scanf("%d",&choi);
			switch(choi)
			{
			case 1:
				printf("your id is %d\n",info[1].id);
				printf(" your name is %s\n",info[1].name);
				printf(" your salary is %d\n",info[1].salary);
				break;
			case 2:
				printf("your id is %d\n",info[2].id);
				printf(" your name is %s\n",info[2].name);
				printf(" your salary is %d\n",info[2].salary);
				break;
			case 3:
				printf("your id is %d\n",info[3].id);
				printf(" your name is %s\n",info[3].name);
				printf(" your salary is %d\n",info[3].salary);
				break;
			default:
				printf("Invalid number");
				break;				
			}
//		}
	
	
	return 0;
}
