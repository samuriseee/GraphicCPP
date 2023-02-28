#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    int color;
    setcolor(BLUE);
    color = getcolor();
    for(int i=0; i<=getmaxx(); i++)
	for(int j=0;j<=getmaxy(); j++)
		putpixel(i,j,color);
    getch();
    return 0;
}