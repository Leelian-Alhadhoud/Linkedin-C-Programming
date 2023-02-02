#include <stdio.h>

int main()
{

    int a;
    int b = 5;

    printf("Input an Integer: ");
    scanf("%d" , &a);
    printf("%d - %d = %d\n" , a,b,a-b);

    return (0);
}