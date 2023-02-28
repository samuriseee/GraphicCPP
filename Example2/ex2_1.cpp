#define  Round(a) int(a+0.5)
int Color = "YELLOW";
void LineDDA (int x1, int y1, int x2, int y2)
{
    int i,x = x1;
    float y = y1;
    float m =(float)((y2-y1)/(x2-x1));
    putpixel(x,floor(y), Color);
    for(i=x1; i<x2; i++)
    {
	    x++;
	    y +=m;
	    putpixel(x,floor(y), Color);
    }
}