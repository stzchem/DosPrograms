#include <stdlib.h>
#include <graphics.h>
#include <math.h>

int main()
{
	int i;
	int gdriver=DETECT;
	int gmode;
	initgraph(&gdriver,&gmode,"C:\\TURBOC2");
	setcolor(RED);
	setfillstyle(SOLID_FILL,GREEN);
	for(i=0;i<200;i++)
	{
		circle(200+5*i,200+50*cos(i),50);
		floodfill(200,200,RED);
		delay(50);
	}
	getch();
	closegraph();
	return 0;
}