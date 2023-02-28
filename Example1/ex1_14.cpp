#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<stdio.h>
void vehcn(int x,int y,int mau1,int mau2);
void Run()
{
	int level=1;
	int x=0,y=200;
	while(1)
	{
	vehcn(x,y,15,4);
	if(kbhit())
		{

			char c = getch();
			if(c == 27 ) break;
			if(c == 77) level = 1;//trai
			if(c == 75) level = 4;//phai
			if(c ==72)
				{
					vehcn(x,y,0,0);
					y-=15;//len
				}
			if(c == 80)
				{
					vehcn(x,y,0,0);
					y+=15;//xuong
				}
		}
	delay(level*35);
	vehcn(x,y,0,0); //ve voi mau nen
	x+=6;
	if (x>630) x=0; //bien ben phai
	if (y>460) y=5; //bien phia duoi
	if (y<0) y=460; //bien phia tren
	}
	closegraph();
}
void vehcn(int x, int y,int mau1,int mau2)
{
	setcolor(mau1);
	setfillstyle(1,mau2);
	bar3d(x,y,x+40,y+20,10,1);
}
int main()
{
	int gd=0,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	Run();
	getch();
	closegraph();
    return 0;
}
