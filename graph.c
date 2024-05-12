#include<GRAPHICS.h>

int main()
{
	int gd= DETECT,gm;
	int x=320,y=240,radius;
	
	initgraph(&gd,&gm,"C:\TURBOC3\BGI");
	
	for(radius=25;radius<=25;radius=radius+20)
	{
		circle(x,y,radius);
	}
	closegraph();
	return 0;
}
