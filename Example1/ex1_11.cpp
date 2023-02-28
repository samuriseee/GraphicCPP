#include <graphics.h>
#include <conio.h>
#include<stdio.h>
int main()
{
int mh=0, mode=0, i;
initgraph(&mh, &mode, "C:\\TC\\BGI");
if (graphresult()!= grOk)
{
	printf("Loi khoi dong do hoa");
	getch();
	exit(1);
}
setfillstyle(1,BROWN); //che do to dac voi mau nau
bar(100,100,200,200);//Ve hinh vuong mau nau
getch(); //Dung xem ket qua, xem xong nhan phim bat ky
setcolor(WHITE);
setwritemode(XOR_PUT);
for(i=100;i<=200;i++)
	line(100,i,200,i);  //Hinh vuong chuyen sang mau gi?
getch();
closegraph();
return 0;
}
