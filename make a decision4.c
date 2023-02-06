#include <stdio.h>

int main()
{
    int input;

    printf("Your choice (1,2,3): ");
    scanf("%d" , &input);

    switch(input)
    {
    case 1:
    printf("Red\n");
    break;

    case 2:
    printf("Green\n");
    break;

    case 3:
    printf("Blue\n");
    break;

    default:
    printf("invalid input\n");
    }

    return (0);


}