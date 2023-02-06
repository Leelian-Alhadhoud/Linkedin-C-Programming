#include <stdio.h>

int main()
{
    int x;

    for(x=0 ; x<10 ; x++);
    // a semi-colen after the for loop is not typically wrong but it just goes through 1 to 10 and prints 11
    printf("%d\n" ,x);

    return(0);

}