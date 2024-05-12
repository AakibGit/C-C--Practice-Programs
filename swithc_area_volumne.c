#include<stdio.h>

int main()
{
	
	int area_volumne,range;
	s:
	printf("Enter 1: for area function:\n");
	printf("Enter 2: for volumne function:\n");
	scanf("%d",&area_volumne);


	// area variable
	int area_option,i,r,ar_sq,side;
	float pi=3.14,area,b,h,ar_tri;
	// volumne variable
	int volumne_option,vol_cub,cube,c_hei,r1;
	float vol_cyl,vol_py,heigth,breadth;
	
	switch(area_volumne)
	{
		case 1:
			while(1)
			{
				printf("Choose options\n");
				printf("Enter 1:for area of circle\n");
				printf("Enter 2:for area of square\n");
				printf("Enter 3:for area of traingle\n\n");
				scanf("%d",&area_option);
			
				if(area_option<=0 || area_option>=4)
					{
					goto l;
					}
			
				switch(area_option)
				{
			
				case 1:
					printf("Enter radius\n\n");
					scanf("%d",&r);
					area=pi*r*r;
					printf("the area of circle is %f\n\n",area);
					break;
				case 2:
					printf("Enter the length of side:\n\n");
					scanf("%d",&side);
					ar_sq=side*side;
					printf("the area of square is %d\n\n",ar_sq);
					break;
				case 3:
					printf("Enter base:\n\n");
					scanf("%f",&b);
					printf("Enter height:\n\n");
					scanf("%f",&h);
					ar_tri=b*h/2;
					printf("the area of triangle is  %f\n\n",ar_tri);
					break;
				}
				goto s;	
			}
			case 2:
				while(1)
			{		printf("Choose options\n");
					printf("Enter 1:for volume of cube\n");
					printf("Enter 2:for volumne of cynlinder\n");
					printf("Enter 3:for volumne of pyramid \n\n");
					scanf("%d",&volumne_option);
			
				if(volumne_option<=0 || volumne_option>=4)
					{
					goto l;
					}
					
				switch(volumne_option)
				{
				case 1:
					printf("Enter the side of cube:\n\n");
					scanf("%d",&cube);
					vol_cub=cube*cube*cube;
					printf("the volumne of cube is %d\n\n",vol_cub);
					break;
				case 2:
					printf("Enter height of cylinder\n\n");
					scanf("%d",&c_hei);
					printf("Enter radius of cylinder\n\n");
					scanf("%d",&r1);
					vol_cyl=pi*(r1*r1)*c_hei;
					printf("the volumne of cylinder is %f\n\n",vol_cyl);
					break;
				case 3:
					printf("Enter height of pyramid\n\n");
					scanf("%f",&heigth);
					printf("Enter breadth of pyramid\n\n");
					scanf("%f",&breadth);
					vol_py=(1/3)*breadth*heigth;
					printf("the volunme of pyramid is %f\n\n",vol_py);
					break;			
				}
				goto s;
			}
		l:	
		default:
			printf("Invalid option\n");
			break;	
	}
	
	
	
	return 0;
}
