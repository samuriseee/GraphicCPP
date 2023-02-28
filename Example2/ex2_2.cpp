#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void  BresLine(int x1, int y1, int x2, int y2)
{
	int Dx,Dy,e,et,ekt;
	int x,y,i,color=LIGHTCYAN;
	Dx=x2-x1;
	Dy=y2-y1;
	e=2*Dy-Dx;     
	ekt=2*Dy;      
	et=2*(Dy-Dx);  
	y=y1;	
	for(x=x1;x<x2;x++)
	{
		if(e<0)  e+=ekt;
		else    {e+=et; y++;}
		putpixel(x,y,color);
	}
}

// ham khoi tao che do do hoa
void InitGraph(void)
{
	int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
	/* Doan code kiem tra khoi dong che do do hoa */
}
int main()
{
	 int x1,y1,x2,y2;
	 int gd=DETECT,gm;
	 initgraph(&gd,&gm,"C:\\TC\\BGI");	
	 printf(" \n nhap vao toa do (x1,y1) va (x2,y2):");
	 scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	 BresLine(x1,y1,x2,y2); //(100,100,400,300),(x2>x1,y2>y1)
	 getch();
	 /* doan code duoi day dung de test chuong trinh, khong can thiet phai co
*/
	 cleardevice();
	 setcolor(YELLOW);
	 //line(10,400,500,100);
	 line(100,100,400,300);
	 getch();
	 closegraph();
     return 0;
}
