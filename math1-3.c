#include <stdio.h>

int main()
{

    float a;
    float b = 5.0;

    printf("Input an Integer: ");
    scanf("%f" , &a);
    printf("%f / %f = %f\n" , a,b,a/b);
    // we use float for division cause division gets into fraction 
    return (0);
}