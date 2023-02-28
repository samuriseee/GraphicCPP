#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
#include <dos.h>
int main()
{
    int gdriver = 0, gmode = 0;
    int x, y, x1, y1;
    char *p;
    int n;
    initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
    /*Doan code kiem tra khoi dong che do do hoa */
    setcolor(RED);
    circle(50, 50, 50);
    n = imagesize(0, 0, 100, 100);
    p = (char *)malloc(n);
    getimage(0, 0, 100, 100, p);
    // getch(); dừng màn hình xem hình đã vẽ
    cleardevice();
    rand();
    x=rand()*getmaxx()/RAND_MAX;
    x = rand()*(640 - 100)/RAND_MAX;
    y = rand()*(480-100)/RAND_MAX;
    do
    {
        putimage(x, y, p, 1);
        delay(100);
        putimage(x, y, p, 1);
        do
        {
            x1 = x + (rand()*50/RAND_MAX)-25;
            y1 = y + (rand()*50/RAND_MAX)-25;
        } while ((x1 < 0) || (x1 > (639 - 100)) || (y1 < 0) || (y1 > (639 - 100)));
        x = x1;
        y = y1;
    } while (!kbhit());

    getch();
    closegraph();
    return 0;
}
