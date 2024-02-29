#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    char *f[]={"Load F3","Pick Alt-F3","New","Save F2","Write to","Directory","Change Dir","OS Shell","Quit Alt-X"};
    char buf[11*16*2];
    clrscr();
    textcolor(YELLOW
    );
    textbackground(BLUE);
    clrscr();
    gettext(10,2,24,11,buf);
    window(10,2,24,11);
    textbackground(RED);
    textcolor(YELLOW);
    clrscr();
    for(i=0;i<9;i++)
    {
	gotoxy(1,i+1);
	cprintf("%s",f[i]);
    }
    getch();
    movetext(10,2,24,11,40,10);
    puttext(10,2,24,11,buf);
    getch();

    return 0;
}
