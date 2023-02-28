#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

/* Truong hop 1:  m<-1 */
void BresLine1(int x1, int y1, int x2, int y2)
{
    int Dx, Dy, e, ekg, eg;
    int x, y, color = YELLOW;
    Dx = x2 - x1;
    Dy = y2 - y1;
    e = 2 * Dx + Dy;
    ekg = 2 * Dx;
    eg = 2 * (Dx + Dy);
    x = x2;
    for (y = y2; y < y1; y++)
    {
        putpixel(x, y, color);
        if (e < 0)
            e += ekg;
        else
        {
            x--;
            e += eg;
        }
    }
}
/* -------- Truong hop 2:  -1<m<0 ------- */
void BresLine2(int x1, int y1, int x2, int y2)
{
    int Dx, Dy, e, ekg, eg;
    int x, y, color = YELLOW;
    Dx = x2 - x1;
    Dy = y2 - y1;
    e = 2 * Dx - Dy;
    ekg = 2 * Dx;
    eg = 2 * (Dx - Dy);
    x = x2;
    for (y = y2; y > y1; y--)
    {
        putpixel(x, y, color);
        if (e < 0)
            e += ekg;
        else
        {
            x--;
            e += eg;
        }
    }
}

/* -------- Truong hop 3:  0<m<=1 -------- */
void BresLine3(int x1, int y1, int x2, int y2)
{
    int Dx, Dy, e, ekg, eg;
    int x, y, color = YELLOW;
    Dx = x2 - x1;
    Dy = y2 - y1;
    e = 2 * Dy - Dx;
    ekg = 2 * Dy;
    eg = 2 * (Dy - Dx);
    y = y1;
    for (x = x1; x < x2; x++)
    {
        putpixel(x, y, color);
        if (e < 0)
            e += ekg;
        else
        {
            y++;
            e += eg;
        }
    }
}

/* -------- Truong hop 4: m>1 -------- */
void BresLine4(int x1, int y1, int x2, int y2)
{
    int Dx, Dy, e, ekg, eg;
    int x, y, color = YELLOW;
    Dx = x2 - x1;
    Dy = y2 - y1;
    e = 2 * Dy + Dx;
    ekg = 2 * Dy;
    eg = 2 * (Dy + Dx);
    y = y1;
    for (x = x1; x < x2; x++)
    {
        putpixel(x, y, color);
        if (e < 0)
            e += ekg;
        else
        {
            y++;
            e += eg;
        }
    }
}

int main()
{
    // BresLine1(100,400,300,100); // m=-3/2
    // BresLine2(100,300,400,100); // m=-2/3
    // BresLine3(100,100,400,300); // m=2/3
    // BresLine4(100,100,300,400); // m=3/2
    int x1, y1, x2, y2;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    // --------- Truong hop 1: m<-1 ------------
    outtextxy(10, 20, "Ve duong thang bang thuat toan BRESENHAM trong truong hop 1: m<-1");
    outtextxy(10, 40, "Toa do 2 diem thoa man x2>x1, y2<y1 va m<-1 voi m=Dy/Dx");
    // outtextxy(10,60,"Nhap vao toa do 2 diem (x1,y1) va (x2,y2):");
    // scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    outtextxy(110, 410, "(x1,y1) = (100,400)");
    outtextxy(310, 90, "(x2,y2) = (300,100)");
    BresLine1(100, 400, 300, 100); // m=-3/2
    getch();
    cleardevice();

    // ----------- Truong hop 2: -1<m<0 ------------
    outtextxy(10, 20, "Ve duong thang bang thuat toan BRESENHAM trong truong hop 2: -1<m<0");
    outtextxy(10,40,"Toa do 2 diem thoa man x2>x1, y2>y1 va -1<m<0 voi m=Dy/Dx");
    outtextxy(110,310,"(x1,y1) = (100,300)");
    outtextxy(410,90,"(x2,y2) = (400,100)");
    BresLine2(100,300,400,100); // m=-2/3
    getch();
    cleardevice();

    // ----------- Truong hop 3: 0<m<1 ------------
    outtextxy(10, 20, "Ve duong thang bang thuat toan BRESENHAM trong truong hop 3: 0<m<=1");
    outtextxy(10, 40, "Toa do 2 diem thoa man x2>x1, y2>y1 va 0<m<=1 voi m=Dy/Dx");
    outtextxy(110, 90, "(x1,y1) = (100,100)");
    outtextxy(410, 310, "(x2,y2) = (400,300)");
    BresLine3(100, 100, 400, 300); // m=2/3
    getch();
    cleardevice();
    
    // ----------- Truong hop 4: m>1 ------------
    outtextxy(10, 20, "Ve duong thang bang thuat toan BRESENHAM trong truong hop 4: m>1");
    outtextxy(10,40,"Toa do 2 diem ");
    outtextxy(110,90,"(x1,y1) = (100,100)");
    outtextxy(310,410,"(x2,y2) = (300,400)");
    BresLine4(100,100,300,400); // m=3/2
    getch();
    cleardevice();

    setcolor(YELLOW);
    outtextxy(100, 200, "Chuong trinh BRESENHAM_LINE da hoan thanh cho 4 truong hop!");
    getch();
    closegraph();
    return 0;
}
