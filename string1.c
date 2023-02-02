#include <stdio.h>

int main()
{
    //char password[] = "Spatula";
    char password[] = "fuzzy wuzzy";
    char password[] = "fuzzy\t\"\nwuzzy";

    printf("The password is %s\n" , password);

    return (0);
}