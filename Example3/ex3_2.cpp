// Gọi ln là độ dài của Cn , ln =  ln-1, l0 = 1
// Cn có được từ Cn-1, bằng cách thay một đoạn thẳng bởi một chóp tam giác vuông.
// Các bước vẽ đường cong:
// 	_ Quay trái 450 
// 	_ Vẽ Cn-1 , độ dài l/  
// 	_ Quay phải 900 
// 	_ Vẽ Cn-1 , độ dài l/  
// 	_ Quay trái 450 để trả hướng

#include <conio.h>
#include <graphics.h>
#include <math.h>

/* he so doi tu do sang radian */
#define RADS 0.017453293

void Koch(int dir, double len, int n)
{
    if (n > 0)
    {
        Koch(dir, len / 3, n - 1);
        dir += 60;
        Koch(dir, len / 3, n - 1);
        dir -= 120;
        Koch(dir, len / 3, n - 1);
        dir += 60;
        Koch(dir, len / 3, n - 1);
    }
    else
        linerel(len * cos(RADS * dir), len * sin(RADS * dir));
}

int main()
{
    int gr_drive = DETECT, gr_mode;
    double temp;
    initgraph(&gr_drive, &gr_mode, "C:\\TC\\BGI");
    setcolor(YELLOW);
    rectangle(0, 0, getmaxx(), getmaxy());
    moveto(100, 350);
    Koch(0, 420, 4);
    Koch(-120, 420, 4);
    Koch(120, 420, 4);
    getch();
    closegraph();
    return 0;
}
