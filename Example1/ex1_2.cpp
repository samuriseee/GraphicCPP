#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    // viet chuong trinh kiem tra do phan giai cua man hinh
    int x = getmaxx();
    int y = getmaxy();
    printf("gia tri so cua man hinh la: %d", gd);
    printf("che do cua man hinh la %d", gm);
    printf("width = %d, height = %d", x, y);
    closegraph();
    return 0;
}
