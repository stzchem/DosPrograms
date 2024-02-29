#include<stdio.h>
int main()
{
    int i;
    char a[5];
    char t;
    printf("Please input five characters:\n");
    for(i=0;i<5;i++)
    {
	scanf("%c,",&a[i]);
    }
    printf("Before reversion\n");
    for(i=0;i<5;i++)
    {
	printf("%c",a[i]);
    }
    for(i=0;i<5/2;i++)
    {
	t=a[(5-1)-i];
	a[(5-1)-i]=a[i];
	a[i]=t;
    }
    printf("\nAfter reversion\n");
    for(i=0;i<5;i++)
    {
	printf("%c",a[i]);
    }
    return 0;
}
