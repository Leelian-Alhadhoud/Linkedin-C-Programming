#include <stdio.h>

int main()
{
    char a;

    printf("Your choice (A,B,C): ");
    scanf("%c", &a);

    switch(a)
    {
        case 'A':
        puts("Excellent Choice!");
        break;

        case 'B':
        puts("This is the most common choice.");
        break;

        case 'C':
        puts("I question your decision.");
        break;

        default: 
        puts("That is not a valid choice.");
    }

    return (0);
    
}