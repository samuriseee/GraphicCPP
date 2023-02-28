#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    int x,y;
    rand();
    
        do{	
            x=rand()*getmaxx()/RAND_MAX;
            y=rand()*getmaxx()/RAND_MAX;
            putpixel(x,y,rand()*15/RAND_MAX);
            delay(2);
        }
    while(!kbhit());
    getch();
    closegraph();//

    return 0;
}