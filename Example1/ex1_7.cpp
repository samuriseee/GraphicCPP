#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setlinestyle(3,0,1);
    lineto(200,200);

    setlinestyle(4,'RED',2);
    line(0,220,300,300);

    setlinestyle(0,0,1);
    linerel(350,350);

    getch();
    closegraph();

}