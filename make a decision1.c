#include <stdio.h>

int main()
{
    int input;

    printf("Type a value (1,2,3): ");
    scanf("%d" , &input);

    if (input ==1)
    {
        puts("Red");
    }

    else if (input ==2)
    {
        puts("Green");
    }

    else if (input ==3)
    {
        puts("blue");
    }

    else
    {
        puts("invalid input");
    }

    return(0);

}