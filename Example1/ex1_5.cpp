#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    int color;
    setcolor(BLUE);
    color = getcolor();
    // tô một phần tư màn hình (phía trên bên phải) bằng màu xanh da trời
    for(int i=getmaxx()/2; i<=getmaxx(); i++)
    for(int j=0;j<=getmaxy()/2; j++)
        putpixel(i,j,color);
    getch();
    return 0;
}