#include <stdio.h>

int main()
{
    char *names[]={"Donald","FEI","Dejun"};

    printf("%c\n",names[1][2]);
    printf("%c\n",*(*(names+1)+2));

    return 0;
}
