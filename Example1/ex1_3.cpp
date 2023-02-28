#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
     int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    int bk;
    int color;
    setbkcolor(WHITE); //Thiết lập màu nền trắng
    setcolor(RED) ; //thiết lập màu vẽ
    line(10,10,200, 200); //Vẽ một đường thẳng với màu đỏ
    getch(); //Dừng màn hình xem kết quả
    //Lấy giá trị của các màu đã thiết lập
    bk=getbkcolor();
    color=getcolor();
    closegraph();//Đóng chế độ đồ họa
    printf("\n Mau nen :%d",bk);
    printf("\n Mau ve:%d",color);
    printf("\n getmaxx= %d getmaxy= %d",getmaxx(), getmaxy());
    getch();
    return 0;
}