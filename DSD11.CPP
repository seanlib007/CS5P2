#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
void boundaryFill(int x, int y, int sColor, int bColor) {
	if (getpixel(x,y)!=sColor && getpixel(x,y)!=bColor) {
		putpixel(x,y,sColor);
		boundaryFill(x,y+1,sColor,bColor);
		boundaryFill(x,y-1,sColor,bColor);
		boundaryFill(x+1,y,sColor,bColor);
		boundaryFill(x-1,y,sColor,bColor);
	}
}
void main() {
	int gd= DETECT,gm,x,y,r;
	initgraph(&gd,&gm,"..\\BGI");
	printf("Enter circle centre points and radius");
	scanf("%d%d%d",&x,&y,&r);
	circle(x,y,r);
	boundaryFill(x,y,6,15);
	getch();
	closegraph();
}


