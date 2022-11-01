#include <graphics.h>
#include <iostream>
int main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm, "");
line(140, 140, 350, 100);
line(140, 140, 200, 200);
line(350, 140, 200, 200);
getch();
closegraph();
}
