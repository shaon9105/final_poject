#include <graphics.h>
#include<iostream>
int main()
{

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(150,250,300,350);
    floodfill(151,251,WHITE);
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    rectangle(170,270,280,330);
    floodfill(181,271,RED);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    line(210,290,210,310);
    line(210,290,230,300);
    line(230,300,210,310);
    floodfill(220,300,WHITE);


     getch();
    closegraph();
    return 0;


    }



