#include<conio.h>
#include<stdio.h>
#include<graphics.h>
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
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\BGI");
	float xc,yc,r,p,x,y;
	printf("Enter the coordinates of the center and raduis :");
	scanf("%f%f%f",&xc,&yc,&r);
	printf("DARREL SEAN DSOUZA 20PMC03 :");
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
	getch();
	closegraph();
}