#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Type three letters: ");
    a = getchar();
    putchar(a);
    b = getchar();
    putchar(b);
    c = getchar();
    putchar(c);

    return (0);

/* this is a strem oriented the stream here is buffered 
which means the computer waits until the buffer is full
or flushed before it actually sends out the characters 
with this paricular program, the buffer is flushed when the program ends */

}