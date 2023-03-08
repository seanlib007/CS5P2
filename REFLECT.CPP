#include <conio.h>
#include <graphics.h>
#include <stdio.h>
void triangle(int x1,int y1 , int x2, int y2, int x3, int y3)
{
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x1,y1,x3,y3);
}
void main()
{

	int gm, gd = DETECT, ax, x1, x2, x3, y1, y2, y3;
	initgraph(&gd, &gm, "..\\BGI");
	cleardevice();
	printf("enter the coorsinates of the triangle");
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);

	line(getmaxx() / 2, 0, getmaxx() / 2,
		getmaxy());
	line(0, getmaxy() / 2, getmaxx(),
		getmaxy() / 2);

	printf("DARREL 20PMC03\n");
	printf("Before Reflection Triangle");

	setcolor(14);
	triangle(x1,y1,x2,y2,x3,y3);
 //	line(x1, y1, x2, y2);
 //	line(x2, y2, x3, y3);
 //	line(x3, y3, x1, y1);
	getch();

	// After reflection
	printf("\nAfter Reflection");

	// Reflection along origin i.e.,
	// in 4th quadrant
	setcolor(4);
	triangle(getmaxx()-x1,getmaxy()-y1,getmaxx()-x2,getmaxy()-y2,getmaxx()-x3,getmaxy()-y3);
//	line(getmaxx() - x1, getmaxy() - y1,getmaxx() - x2, getmaxy() - y2);

//	line(getmaxx() - x2, getmaxy() - y2,getmaxx() - x3, getmaxy() - y3);

//	line(getmaxx() - x3, getmaxy() - y3,getmaxx() - x1, getmaxy() - y1);

	// Reflection along x-axis i.e.,
	// in 1st quadrant
	setcolor(3);
	triangle(getmaxx()-x1,y1,getmaxx()-x2,y2,getmaxx()-x3,y3);

//	line(getmaxx() - x1, y1,getmaxx() - x2, y2);
//	line(getmaxx() - x2, y2,getmaxx() - x3, y3);
//	line(getmaxx() - x3, y3,getmaxx() - x1, y1);

	// Reflection along y-axis i.e.,
	// in 3rd quadrant
	setcolor(2);
	triangle(x1,getmaxy()-y1,x2,getmaxy()-y2,x3,getmaxy()-y3);
//	line(x1, getmaxy() - y1, x2,getmaxy() - y2);
//	line(x2, getmaxy() - y2, x3,getmaxy() - y3);
//	line(x3, getmaxy() - y3, x1,getmaxy() - y1);
	getch();

	// Close the graphics
	closegraph();

}
