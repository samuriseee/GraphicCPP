#include<conio.h>
#include<graphics.h>
int main()
{
    int gd = DETECT, gm;
    int i;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
	setcolor(WHITE);

	arc(320, 240, 45,135,100);
	getch();
	cleardevice();

	ellipse(320,240, 0, 360, 150, 110);
	getch();
	cleardevice();

	circle(320, 240, 160);
	getch();
	cleardevice();

	rectangle(140, 60, 500,420);
	getch();
	cleardevice();

	setfillstyle(1, BLUE);
	pieslice(320, 240, 45, 300, 200);
	getch();
    cleardevice();

	for( i=0; i<12; i++) //Tô với các mẫu khác nhau cho 1 mảnh ellipse
	{
		setfillstyle(i, getmaxcolor());
		sector(320, 240, 45, 250, 300, 200);
		getch();
	}
	cleardevice();
	setfillstyle(1, YELLOW);
	bar(30, 250, 300, 460);
	bar3d(340, 120, 520, 360, 50, 1);
	getch();
    return 0;
}
