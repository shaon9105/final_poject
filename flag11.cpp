#include <graphics.h>
#include<iostream>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");


    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle (180,180,190,450);
    floodfill(181,181,WHITE);
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    rectangle (190,190,360,290);
    floodfill(191,191,GREEN);
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    circle(270,240,30);
    floodfill(270,240,RED);

   /* for (int i=625;i>=-100; i--){
    outtextxy(i,400,"NATIONAL FLAG");
    delay(30);
}*/


     getch();
    closegraph();
    return 0;


    }



