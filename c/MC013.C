#include <stdio.h>

int main()
{
    int num;
    int *pi=&num;

    num=0;

    printf("Address of num:%d\nValue of num:%d\n",&num,num);
    printf("Address of pi:%d\nValue of pi:%d\n",&pi,pi);

    return 0;
}