#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    float b;

    printf("Type two integers:");
    scanf("%f", &a);
    scanf("%f",&b);
    printf("addition = %f + %f = %f\n", a,b,a+b);
    printf("subtraction = %f - %f = %f\n", a,b,a-b);
    printf("multiplication = %f * %f = %f\n", a,b,a*b);
    printf("division = %f / %f = %f\n", a,b,a/b);
    printf("%f to the %fth power is = %f\n", a,b,pow(a,b));
    printf("the square root of %f is = %f \n", a,sqrt(a));
    printf("the square root of %f is = %f \n", b,sqrt(b));

    return (0);

}