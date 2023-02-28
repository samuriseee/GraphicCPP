#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
/* Xay dung cac mang chua toa do cac dinh */
int poly1[]={280,150,360,150,390,190,250,190,280,150};
int poly2[]={305,240,335,240,320,470,265,470,305,240};
int poly3[]={545,90,555,90,560,180,540,180,545,90};
int poly4[]={0,160,100,50,170,160,0,160};
int poly5[]={100,160,225,10,320,160,100,160};
int poly6[]={200,160,380,10,490,160,200,160};
int poly7[]={580,90,590,90,595,180,575,180,580,90};
int poly8[]={40,90,50,90,55,180,35,180,40,90};
int poly9[]={25,90,35,90,40,180,20,180,25,90};

void ngoi_nha()
     {
	/* Ve than ngoi nha*/
	/* HAM: setfillstyle(int pattern,int color)
	   dung de chon mau(kieu) to va mau to
		 pattern la xac dinh ma cua mau(kieu) to
		 color   la xac dinh ma cua mau to */
	setfillstyle(SOLID_FILL,YELLOW);
	/* HAM :bar(int x1,int y1,int x2,int y2)
	   dung de ve va to mau mot hinh chu nhat
		 (x1,y1) la toa do dinh tren ben trai cua HCN
		 (x2,y2) la toa do dinh duoi ben phai cua HCN */
	bar(270,190,370,240);

	/* Ve mai nha */
	setfillstyle(XHATCH_FILL,LIGHTMAGENTA);
	/* HAM :fillpoly(n,a) dung de ve va to mau mot da giac
	      n la da giac co n dinh
	      a la mot mang a nao do da duoc dua cac toa do vao voi kieu int*/
	fillpoly(4,poly1);

	/* Ve cua chinh */
	setfillstyle(SOLID_FILL,LIGHTRED);
	bar(305,200,335,240);

	/* Ve cua so */
	setfillstyle(8,LIGHTCYAN);
	bar(365,210,345,230);

	/* Ve con duong */
	setfillstyle(CLOSE_DOT_FILL,LIGHTRED);
	fillpoly(4,poly2);
     }
/* Ham ve ao ca */
void ao_ca()
     {
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	/* HAM: pieslice(int x,int y,int gd,int gc,int r)la
	dung de ve va to mau mot hinh quat
	      (x,y)la toa do tam hinh quat
	      gd la goc dau
	      gc la goc cuoi
	      r  la ban kinh */
	pieslice(640,480,90,180,250);

	/* Ve la sen va hoa sen */
	setfillstyle(1,YELLOW+LIGHTRED);
	/* HAM : fillellipse(int x,int y,int xr,int yr)
	   dung de ve va to mau mot elip voi
	       (x,y) la toa do tam cua elip
	       xr la ban truc ngang
	       yr la ban truc dung */
	fillellipse(600,400,30,20); //La sen
	setfillstyle(1,LIGHTRED);
	fillellipse(600,400,4,3);   //Hoa sen
	setfillstyle(1,YELLOW+LIGHTRED);
	fillellipse(500,420,30,20);
	setfillstyle(1,LIGHTRED);
	fillellipse(500,420,4,3);
	setfillstyle(1,YELLOW+LIGHTRED);
	fillellipse(550,300,30,20);
	setfillstyle(1,LIGHTRED);
	fillellipse(550,300,4,3);
	setfillstyle(1,YELLOW+LIGHTRED);
	fillellipse(640,460,30,20);
	setfillstyle(1,LIGHTRED);
	fillellipse(640,460,4,3);
	setfillstyle(1,YELLOW+LIGHTRED);
	fillellipse(630,300,40,30);
	setfillstyle(1,LIGHTRED);
	fillellipse(630,300,4,3);
     }
/* Ham ve cay xanh */
void cay()
     {
	setfillstyle(1,BROWN);
	fillpoly(4,poly7);   //Than cay
	setfillstyle(1,GREEN);
	fillellipse(585,60,25,45); //Tan la cay
	setfillstyle(1,BROWN);
	fillpoly(4,poly3);
	setfillstyle(1,GREEN);
	fillellipse(550,60,25,45);
	setfillstyle(1,DARKGRAY);
	fillpoly(4,poly8);
	setfillstyle(1,GREEN);
	fillellipse(45,55,25,45);
	setfillstyle(1,DARKGRAY);
	fillpoly(4,poly9);
	setfillstyle(1,GREEN);
	fillellipse(30,50,30,50);
     }
/* Ham ve mat dat */
void mat_dat()
     {
	setfillstyle(1,GREEN);
	bar(0,getmaxy()/3,getmaxx(),getmaxy());
     }
/* Ham ve mat troi */
void bau_troi()
     {
	setfillstyle(1,9);
	bar(0,0,getmaxx(),getmaxy()/3);
     }
/* Ham ve nhung dam may */
void may()
     {
	setfillstyle(1,WHITE);
	fillellipse(250,30,40,12);
	fillellipse(150,70,40,12);
	fillellipse(350,50,40,12);
	fillellipse(400,5,40,13);
	fillellipse(500,50,40,11);
	fillellipse(10,10,50,11);
     }
/* Ham ve nui */
void nui()
     {
	setfillstyle(1,BROWN);
	fillpoly(4,poly6);
	setfillstyle(1,BROWN);
	fillpoly(4,poly5);
	setfillstyle(1,BROWN);
	fillpoly(4,poly4);

     }
/* Ham ve mat troi*/
void mat_troi()
     {
	setfillstyle(1,YELLOW);
	fillellipse(285,65,40,40);

     }
/* Ham ve hang rao */
void hang_rao()
     {
	setfillstyle(1,YELLOW);

	bar(40,300,45,340);  //Thanh doc thu 1 cua hang rao ben trai
	bar(70,300,75,340);  //Thanh doc thu 2
	bar(100,300,105,340);//Thanh doc thu 3
	bar(130,300,135,340);//Thanh doc thu 4
	bar(160,300,165,340);//Thanh doc thu 5
	bar(190,300,195,340);//Thanh doc thu 6
	bar(220,300,225,340);//Thanh doc thu 7
	bar(250,300,255,340); //Thanh doc thu 8
	bar(345,300,350,340); //Thanh doc thu 1 cua hang rao ben phai
	bar(375,300,380,340); //Thanh doc thu 2
	bar(405,300,410,340); //Thanh doc thu 3
	setfillstyle(1,LIGHTRED);
	bar(30,310,270,313);  //Thanh ngang thu 1 cua hang rao nam ben trai
	bar(30,330,270,333);  //Thanh ngang thu 2
	bar(335,310,420,313); //Thanh ngang thu 1 cua hang rao nam ben phai
	bar(335,330,420,333);//Thanh ngang thu 2
     }
/* Ham ve khu vuon */
int poly10[]={80,250,240,250,235,320,70,320,80,250};
void vuon()
     {
	setfillstyle(11,LIGHTCYAN);
	fillpoly(4,poly10);
	setfillstyle(1,LIGHTRED);
	fillellipse(120,270,4,3); //Bong hoa
	fillellipse(100,270,4,3);
	fillellipse(85 ,270,4,3);
	fillellipse(140,270,4,3);
	fillellipse(160,270,4,3);
	fillellipse(180,270,4,3);
	fillellipse(200,270,4,3);
	fillellipse(220,270,4,3);
	setfillstyle(1,YELLOW);
	fillellipse(120,255,4,3);
	fillellipse(100,255,4,3);
	fillellipse(87 ,255,4,3);
	fillellipse(142,255,4,3);
	fillellipse(162,255,4,3);
	fillellipse(182,255,4,3);
	fillellipse(202,255,4,3);
	fillellipse(222,255,4,3);
	setfillstyle(1,YELLOW);
	fillellipse(122,285,4,3);
	fillellipse(102,285,4,3);
	fillellipse(83 ,285,4,3);
	fillellipse(137,285,4,3);
	fillellipse(157,285,4,3);
	fillellipse(177,285,4,3);
	fillellipse(197,285,4,3);
	fillellipse(217,285,4,3);
	setfillstyle(1,LIGHTRED);
	fillellipse(117,300,4,3);
	fillellipse(97 ,300,4,3);
	fillellipse(81, 300,4,3);
	fillellipse(135,300,4,3);
	fillellipse(155,300,4,3);
	fillellipse(175,300,4,3);
	fillellipse(195,300,4,3);
	fillellipse(215,300,4,3);
      }
int main() /* Ham chinh*/
      {
        int gd = DETECT, gm;
		int i;
		initgraph(&gd, &gm, "C:\\TC\\BGI"); /*Goi ham khoi tao che do do
        hoa vo duong dan den thu muc hien hanh BGI */
        mat_dat();
        bau_troi();
        mat_troi();
        may();
        nui();
        cay();
        ngoi_nha();
        vuon();
        hang_rao();
        ao_ca();
        getch();
        closegraph(); /*Ngung lam viec tren che do do hoa*/
		return 0;
      }
