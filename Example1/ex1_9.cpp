#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int MaxX,MaxY;
int poly1[]={330,70,450,10,370,100};
int poly2[]={330,170,450,110,370,200};
int poly3[]={330,310,450,250,370,340,330,310};
int poly4[]={330,410,450,350,370,440,330,410};
char *p;
unsigned size;

void khoi_tao(void)
{
	int grdriver=DETECT,grmode,errorcode;
	initgraph(&grdriver,&grmode,"");
	setbkcolor(BLACK);
	setcolor(YELLOW);
	errorcode=graphresult();
	if(errorcode!=grOk)
	{
		printf("Graphics error:%s\n",grapherrormsg(errorcode));
		printf("Press any key to halt:");
		getch();
		exit(1); //Ngung han chuong trinh
	}
}
void chia_cot(void)
{
	MaxX=getmaxx();
	MaxY=getmaxy();
	/* Ve doan thang tu 2 diem bat ki */
	line(0,MaxY/2,MaxX,MaxY/2);
line(MaxX/2,MaxY,MaxX/2,0);
	line(MaxX/4,0,MaxX/4,MaxY);
	line(3*MaxX/4,0,3*MaxX/4,MaxY);
	/* Ve doan thang tu vi tri con tro den vi tri bat ki */
	/*lineto(MaxX,0);*/
	/*lineto(0,MaxY);*/
}
/* Ve cung tron va duong tron */
void tron(void)
{
	arc(MaxX/8,MaxY/8,90,360,50);
	circle(MaxX/8,3*MaxY/8,50);
	/* Ve elip, hinh quat*/
	setfillstyle(SOLID_FILL,GREEN);  
     // chi co tac dung voi ham pieslice
	ellipse(3*MaxX/8,MaxY/8,0,360,60,40);
	/*fillellipse(3*MaxX/8,MaxY/8,45,270);*/
	pieslice(3*MaxX/8,3*MaxY/8,45,300,50);

}
void da_giac(void)
{
	drawpoly(3,poly1);
	setfillstyle(SOLID_FILL,BLUE);
	fillpoly(3,poly2);
	drawpoly(4,poly3);
	setfillstyle(SOLID_FILL,RED);
	fillpoly(4,poly4);
}
/* Ve hinh chu nhat*/
void chu_nhat(void)
{
	rectangle(520,10,620,110);
	setfillstyle(SOLID_FILL,MAGENTA);
	bar(520,130,620,230);
	setfillstyle(SOLID_FILL,LIGHTGRAY);
	bar3d(520,260,620,360,10,1); //1: co nap, 0: ko co nap
	setfillstyle(SOLID_FILL,CYAN);
	bar3d(520,380,620,440,7,0); //1: co nap, 0: ko co nap
}
void hienthi_text(void)
{
	outtextxy(10,260,"Man hinh do hoa co");
	outtextxy(10,275,"do phan giai la: ");
	outtextxy(10,290,"640 X 480 ");
}
/* Copy diem anh tu noi nay sang noi khac */
// Copy y nguyen hinh 3d chu nhat tu o cuoi sang o thu 2
void copy_diemanh(void)
{
	size=imagesize(520,260,620,360);
     // toa do cua hinh can chep(HCN 3D)
	// p tro toi vung nho size byte moi duoc cap phat
	p=(char*)malloc(size);
	getimage(520,260,620,360,p);
	putimage(180,260,p,COPY_PUT);
}
/* Ham chinh */
int main()
{
	khoi_tao();
	cleardevice(); //xoa man hinh
	chia_cot();
	tron();
	da_giac();
	chu_nhat();
	hienthi_text();
	copy_diemanh();
	getch();
	closegraph();
    return 0;
}
