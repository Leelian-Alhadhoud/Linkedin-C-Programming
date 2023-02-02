#include <stdio.h>

int main()
{
    char name[15];           // room for 14 characters

    printf("your name?");
    scanf("%s" , name);
    printf("Your name %s.\n" , name);

    return (0);
}