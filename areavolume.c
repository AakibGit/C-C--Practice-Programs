#include<stdio.h>

int main()
{
	int i,choice,range,r,side,ar_sq,cube,vol_cub,c_hei;
	float pi=3.14,area,b,h,ar_tri,vol_cyl,vol_py,height,breadth;
	
printf("Enter 1:for area of circle\n");
printf("Enter 2:for area of square\n");
printf("Enter 3:for area of traingle\n");
printf("Enter 4:for volume of cube\n");
printf("Enter 5:for volumne of cynlinder\n");
printf("Enter 6:for volumne of pyramid \n");
	scanf("%d",&choice);

if(choice<7){
	printf("Enter to number to how much time to run\n");
	scanf("%d",&range);

}
	
	
	switch(choice)
	{
		case 1:
			printf("Enter radius\n");
			scanf("%d",&r);
			area=pi*r*r;
			printf("%f",area);
			
			break;
		case 2:
			printf("Enter the length of side:\n");
			scanf("%d",&side);
			ar_sq=side*side;
			printf("%d\n",ar_sq);
			
			break;
		case 3:
	
			printf("Enter base:\n");
			scanf("%f",&b);
			printf("Enter height:\n");
			scanf("%f",&h);
			ar_tri=b*h/2;
			printf("%f\n",ar_tri);
			
			break;
		case 4:
			
			
			printf("Enter the side of cube:\n");
			scanf("%d",&cube);
			vol_cub=cube*cube*cube;
			printf("%d\n",vol_cub);
			
		case 5:
			
			
				printf("Enter height of cylinder\n");
				scanf("%d",&c_hei);
				printf("Enter radius of cylinder\n");
				scanf("%d",&r);
				vol_cyl=pi*(r*r)*c_hei;
				printf("%f\n",vol_cyl);
				
				
			break;
		case 6:
			
			
				printf("Enter height of pyramid\n");
				scanf("%f",&height);
				printf("Enter breadth of pyramid\n");
				scanf("%f",&breadth);
				vol_py=(1/3)*breadth*height;
				printf("%f\n",vol_py);
				
				
			break;			
//		else
//		{
				printf("Invalid option ");
//		}
							
	}
	return  0;
}
