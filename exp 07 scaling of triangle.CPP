#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void triangle(int x1,int y1,int x2,int y2,int x3,int y3)
{
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
}
void scale(int x1,int y1,int x2,int y2,int x3,int y3,int tx,int ty)
{
	triangle(x1,y1,x2,y2,x3,y3);
	x1=x1*tx;
	x2=x2*tx;
	x3=x3*tx;
	y1=y1*ty;
	y3=y3*ty;
	y2=y2*ty;
	delay(2000);
	triangle(x1,y1,x2,y2,x3,y3);
}
void main()
{
	int gd=DETECT,gm,choice;
	initgraph(&gd,&gm,"..\\BGI");
	int x1,x2,y1,y2,x3,y3,ty,tx;
	printf("Enter the 1st coordinate :\n");
	scanf("%d%d",&x1,&y1);
	printf("Enter the 2nd coordinate :\n");
	scanf("%d%d",&x2,&y2);
	printf("Enter the 3rd coordinate :\n");
	scanf("%d%d",&x3,&y3);
	printf("Enter the scaling  factor :\n");
	scanf("%d%d",&tx,&ty);
	printf("DARREL SEAN DSOUZA 20PMC03:\n");
	scale(x1,y1,x2,y2,x3,y3,tx,ty);
	getch();
	closegraph();
}
