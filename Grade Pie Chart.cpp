#include<stdio.h>
#include<graphics.h>
main(){
    int gd= DETECT, gm;
    initgraph(&gd, &gm, "");

    int mx=getmaxx()/2;
    int my=getmaxy()/2;
    //A+
    setfillstyle(SOLID_FILL,RED);
    pieslice(mx,my,0,20,100);
    //A
    setfillstyle(SOLID_FILL,GREEN);
    pieslice(mx,my,20,200,100);
    //A-
    setfillstyle(SOLID_FILL,BLUE);
    pieslice(mx,my,200,240,100);
    //B+
    setfillstyle(SOLID_FILL,YELLOW);
    pieslice(mx,my,240,360,100);

    getch();
    closegraph();
    return 0;
}
