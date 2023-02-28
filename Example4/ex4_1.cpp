#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<math.h>
#define RADS 0.017453293   /* he so doi tu do sang radian */

void rectangle_rotate(int xc, int yc, int width, int height)
{
  float x1, y1, x2, y2, x3, y3, x4, y4, angle;
  float oldx1, oldy1, oldx2, oldy2, oldx3, oldy3, oldx4, oldy4;

  x2 = x3 = xc + (float)width / 2;
  x1 = x4 = xc - (float)width / 2;
  y1 = y2 = yc - (float)height / 2;
  y3 = y4 = yc + (float)height / 2;
  angle = 3 * RADS;
  do {
    setcolor(rand()*15/RAND_MAX);
    moveto(x1, y1);
    lineto(x2, y2);
    lineto(x3, y3);
    lineto(x4, y4);
    lineto(x1, y1);
    delay(100);
    setcolor(BLACK);
    moveto(x1, y1);
    lineto(x2, y2);
    lineto(x3, y3);
    lineto(x4, y4);
    lineto(x1, y1);
    oldx1 = x1;
    oldy1 = y1;
    x1 = ((oldx1 - xc) * cos(angle)) + ((oldy1 - yc) * sin(angle)) + xc;
    y1 = ((oldy1 - yc) * cos(angle)) - ((oldx1 - xc) * sin(angle)) + yc;
    oldx2 = x2;
    oldy2 = y2;
    x2 = ((oldx2 - xc) * cos(angle)) + ((oldy2 - yc) * sin(angle)) + xc;
    y2 = ((oldy2 - yc) * cos(angle)) - ((oldx2 - xc) * sin(angle)) + yc;
    oldx3 = x3;
    oldy3 = y3;
    x3 = ((oldx3 - xc) * cos(angle)) + ((oldy3 - yc) * sin(angle)) + xc;
    y3 = ((oldy3 - yc) * cos(angle)) - ((oldx3 - xc) * sin(angle)) + yc;
    oldx4 = x4;
    oldy4 = y4;
    x4 = ((oldx4 - xc) * cos(angle)) + ((oldy4 - yc) * sin(angle)) + xc;
    y4 = ((oldy4 - yc) * cos(angle)) - ((oldx4 - xc) * sin(angle)) + yc;
  } while (!kbhit());
}
int main()
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   cleardevice();
   
   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:\\TC\\BGI");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      _getch();
      exit(1); /* terminate with an error code */
   }

   rectangle_rotate(200,100,200,200);
   _getch();
   closegraph();
   return 0;
}
