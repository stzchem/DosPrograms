#include <stdlib.h>
#include <stdio.h>

int main(int argc,char* argv[],char* env[])
{
    int i;
    textbackground(0);
    clrscr();
    for(i=1;i<8;i++)
    {
	window(10+i*5,5+i,30+i*5,15+i);
	textbackground(i);
	textattr(i+1);
	printf("Hello");

    }
    getch();

    return 0;
}