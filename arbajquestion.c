#include<stdio.h>

int main()
{
	int choice;
	float pi=3.14;
	
	printf("Enter 1 for area\n");
	printf("Enter 2 for vloumne\n");
	scanf("%d",&choice);
	
	printf("\n");
	
	if(choice==1)
	{
		int ch1;
		printf("Enter 1:for area of circle\n");
		printf("Enter 2:for area of square\n");
		printf("Enter 3:for area of traingle\n");
		scanf("%d",&ch1);
		if(ch1==1)
		{
			int r;
			float area;
			printf("Enter radius\n");
			scanf("%d",&r);
			area=pi*r*r;
			printf("%f",area);
		}
		else if(ch1==2)
		{
			int side,ar_sq;
			
			printf("Enter the length of side:\n");
			scanf("%d",&side);
			ar_sq=side*side;
			printf("%d\n",ar_sq);

		}
		else if(ch1==3)
		{
			float b,h,ar_tri;
			
			printf("Enter base:\n");
			scanf("%f",&b);
			printf("Enter height:\n");
			scanf("%f",&h);
			ar_tri=b*h/2;
			printf("%f\n",ar_tri);
		}
	}
	else if(choice==2)
	{
		int ch2;
		
		printf("Enter 1:for volume of cube\n");
		printf("Enter 2:for volumne of cynlinder\n");
		printf("Enter 3:for volumne of pyramid \n");
		scanf("%d",&ch2);
		
		if(ch2==1)
		{
			int cube,vol_cub;
			
			printf("Enter the side of cube:\n");
			scanf("%d",&cube);
			vol_cub=cube*cube*cube;
			printf("%d\n",vol_cub);
		}
		else if(ch2==2)
		{
			int hei,r;
			float vol_cyl;
			
				printf("Enter height of cylinder\n");
				scanf("%d",&hei);
				printf("Enter radius of cylinder\n");
				scanf("%d",&r);
				vol_cyl=pi*(r*r)*hei;
				printf("%f\n",vol_cyl);
		}
		else if(ch2==3)
		{
			float height,breadth,vol_py;
			
		    	printf("Enter height of pyramid\n");
				scanf("%f",&height);
				printf("Enter breadth of pyramid\n");
				scanf("%f",&breadth);
				vol_py=(1/3)*breadth*height;
				printf("%f\n",vol_py);
		}
	}
	else
	{
		printf("invalid number\n");
	}
	
	return 0;
}
