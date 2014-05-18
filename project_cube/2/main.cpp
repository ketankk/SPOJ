#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <iostream>
using namespace std;

int main()
{
int x = 250, y = 200;
int gd = DETECT, gm;
initgraph(&gd, &gm, "E:\utmp");
moveto(x, y+100);
lineto(x, y);
lineto(x+25, y-25);
lineto(x+125, y-25);
line(x, y, x+100, y);
line(x, y+100, x+100, y+100);

moveto(x+100, y);
lineto(x+100, y+100);
lineto(x+125, y+75);
lineto(x+125, y-25);
lineto(x+100, y);

setlinestyle(2, 1, 1);
line(x+25, 175, x+25, y+75);
line(x+25, 275, x, y+100);
line(x+25, 275, x+125, y+75);

getch();
getch();
closegraph();
}
