#include <stdio.h>

int main()
{
    int input;

    printf("Your choice (1,2,3): ");
    scanf("%d" , &input);

    switch(input)
    {
    case 1:
    printf("Red");
    break;

    case 2:
    printf("Green");
    break;

    case 3:
    printf("Blue");
    break;

    default:
    printf("invalid input");
    }

    return (0);


}