#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");


    //For FIELD
     setcolor(GREEN);
     setfillstyle(SOLID_FILL,GREEN);
     rectangle(50,200,600,450);
     floodfill(51,201,GREEN);

     setcolor(WHITE);
     line(50,300,80,300);
     line(50,350,80,350);
     line(80,300,80,350);

     line(50,280,100,280);
     line(50,370,100,370);
     line(100,280,100,370);

     line(600,300,570,300);
     line(600,350,570,350);
     line(570,300,570,350);

     line(600,280,550,280);
     line(600,370,550,370);
     line(550,280,550,370);

     arc(100,325,270,90,25);

     arc(550,325,90,270,25);

     line(325,200,325,450);

     arc(325,325,0,360,30);


    getch();
    closegraph();
    return 0;


    }


