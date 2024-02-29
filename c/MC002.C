#include <stdio.h>
#include <graphics.h>
int main()
{
    int gdriver,gmode;
    detectgraph(&gdriver,&gmode);
    printf("The graphics driver is %d, mode is %d\n",gdriver,gmode);

    initgraph(&gdriver,&gmode,"C:\\TURBOC2");
    setbkcolor(3);
    setcolor(4);
    bar3d(100,100,300,250,50,1);
    getchar();

    closegraph();
    return 0;
}