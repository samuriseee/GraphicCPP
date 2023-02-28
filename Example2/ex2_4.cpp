#include <stdio.h>
#include <conio.h>
#include <graphics.h>	
void Michener_Circle(int xc, int yc, int Radius, int color)
{
  int x, y, d;
  x = 0;
  y = Radius;
  d = 3 - 2 * Radius;
  while (x <= y)
  {
    	putpixel(xc + x, yc + y, color);
	putpixel(xc - x, yc + y, color);
    	putpixel(xc + x, yc - y, color);
    	putpixel(xc - x, yc - y, color);
    	putpixel(xc + y, yc + x, color);
    	putpixel(xc - y, yc + x, color);
    	putpixel(xc + y, yc - x, color);
    	putpixel(xc - y, yc - x, color);
    	if (d < 0) d += 4 * x + 6;
    	else
    	{
      	d += 4 * (x-y) + 10;
      	y--;
    	}
    	x++;
  }
}
int main()
{
  int x,y,r,color=LIGHTGREEN;
  char msg[80]; 
  int gr_drive = DETECT, gr_mode;
  initgraph(&gr_drive, &gr_mode, "C:\\TC\\BGI");
  printf("\n Nhap toa do tam O cua duong tron: "); scanf("%d%d",&x,&y);
  printf("\n Nhap ban kinh R cua duong tron: "); scanf("%d",&r);
  sprintf(msg,"Ve duong tron tai tam (%d,%d) voi ban kinh R %d",x,y,r); 
  outtextxy(200,400,msg); 
  Michener_Circle (x,y,r,color);
  getch();
  closegraph();
  return 0;
}
