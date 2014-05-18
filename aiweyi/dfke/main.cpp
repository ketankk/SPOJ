#include <graphics.h>
#include <stdio.h>



int main( )
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"C:\\tc\\bgi");

    bar(100,100,400,300);
    getch();
    closegraph();

    return 0;
}
