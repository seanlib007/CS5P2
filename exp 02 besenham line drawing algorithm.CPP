//Program for besenham line drawing algorithm
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gm=DETECT,gd;
	initgraph(&gm,&gd,"..\\BGI");
	float x1,y1,x2,y2,x,y,dx,dy,d;
	printf("Enter the starting points");
	scanf("%f&%f",&x1,&y1);
	printf("Enter the ending points");
	scanf("%f%f",&x2,&y2);
	dx=x2-x1;
	dy=y2-y1;
	x=x1;
	y=y1;
	d=2*dy-dx;
	while(x<x2)
	{
		putpixel(x,y,4);
		if(d>=0)
		{
			x++;
			y++;
			d=d+2*(dy-dx);
		}
		else
		{
			x++;
			d=d+2*dy;
		}
	}
	getch();
	closegraph();
}


