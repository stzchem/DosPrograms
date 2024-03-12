#include <stdio.h>

#define MAX 4

int main()
{
    int i,j;

    for(i=0;i<MAX;i++)
    {
	for(j=0;j<MAX-i;j++)
	{
	    if(j==MAX-i-1)
	    {
		printf("*");
	    }
	    else
	    {
		printf("* ");
	    }
	}
	printf("\n");
    }
    return 0;
}