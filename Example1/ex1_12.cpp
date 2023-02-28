#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
	int gdriver=0, gmode=0, maloi;
	int x, y, r, dx, dy;
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
	/*Doan code kiem tra khoi dong che do do hoa */
	x=30,y=50, r=30,dx=4,dy=4;
	do
	{   
     setcolor(YELLOW);
		circle(x,y,r); //ve duong tron mau vang
		delay(20);
		setcolor(0); //Ve trung mau nen
		circle(x,y,r);

	   if((x>=640-r) || (x<r)) dx=-dx;
	   if((y>480-r)|| (y<r)) dy=-dy;
	   x+=dx; //cap nhat lai toa do
	   y+=dy;
	}
	while(!kbhit());
	getch();
	closegraph();
    return 0;
   }
