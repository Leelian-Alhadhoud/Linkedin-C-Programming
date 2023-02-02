#include <stdio.h>

int main()
{
    int x;

    printf("Type an integer: ");
    scanf("%d",&x);
    /* the scanf function uses the %d placeholder to fetch
    an integer value and it is assigned to variable x */
    printf("Integer %d\n" ,x);

    return (0);
}