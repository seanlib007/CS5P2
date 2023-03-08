#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\BGI");
	float xc,yc,y,x,t,s,r;
	printf("Enter the coordinates of the center :");
	scanf("%f%f",&xc,&yc);
	printf("Enter the radius :");
	scanf("%f",&r);
	printf("DARREL SEAN DSOUZA 20PMC03:");
	for(t=0;t<=(2*3.14)
	;t+=0.01)
	{
		x=xc+r*cos(t);
		y=yc+r*sin(t);
		putpixel(x,y,4);
	}
	getch();
	closegraph();
}