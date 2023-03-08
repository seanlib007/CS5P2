#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void line(float x1,float y1,float x2,float y2)
{
	int x,y,dx,dy,d;
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
}
void plot(int a,int b, int xc,int yc)
{
	putpixel(xc+a,yc+b,1);
	putpixel(xc+b,yc+a,2);
	putpixel(xc-a,yc+b,3);
	putpixel(xc+a,yc-b,4);
	putpixel(xc-b,yc+a,5);
	putpixel(xc+b,yc-a,6);
	putpixel(xc-a,yc-b,7);
	putpixel(xc-b,yc-a,8);
}
void circle(float xc,float yc,float r)
{
	int x,y,p;
	x=0;
	y=r;
	p=1-r;
	while(x<y)
	{
		if(p<0)
		{
			x++;
			plot(x,y,xc,yc);
			p=p+2*x+1;
		}
		else
		{
			x++;
			y--;
			plot(x,y,xc,yc);
			p=p+2*(x-y)+1;
		}
	}
}

void main()
{
	int gd=DETECT,gm,choice;
	initgraph(&gd,&gm,"..\\BGI");
	float xc,x1,x2,y1,y2,yc,y,x,t,s,r;
	printf("Enter the 1. for line \n 2. for a circle:\n");
	scanf("%d",&choice);
	printf("DARREL SEAN DSOUZA 20PMC03:\n");
	switch(choice)
	{
		case 1:
			printf("enter the start and end coordintes :");
			scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
			line(x1,y1,x2,y2);
			break;
		case 2:
			printf("enter the coordinates of center and radius :\n");
			scanf("%f%f%f",&xc,&yc,&r);
			circle(xc,yc,r);
			break;
		default:
			printf("invalid choice");
	}
	getch();
	closegraph();
}

