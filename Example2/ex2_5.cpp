#include <graphics.h>
#include <conio.h>

void FloodFill (int x, int y, int in_color, int new_color)
{
  if (getpixel(x, y) == in_color)
  {
    putpixel(x, y, new_color);
    FloodFill(x-1, y, in_color, new_color);
    FloodFill(x+1, y, in_color, new_color);
    FloodFill(x, y-1, in_color, new_color);
    FloodFill(x, y+1, in_color, new_color);
  }
}

int main()
{
  int gr_drive = DETECT, gr_mode;
  initgraph(&gr_drive, &gr_mode, "C:\\TC\\BGI");
  circle(getmaxx()/2, getmaxy()/2, 15);
  FloodFill(getmaxx()/2, getmaxy()/2, 0, 4);
  getch();
  closegraph();
    return 0;
}
