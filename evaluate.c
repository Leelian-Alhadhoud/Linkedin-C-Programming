#include <stdio.h>

void evaluate(int x);

int main()
{
	int i;

	printf("Type an integer value: ");
	scanf("%d",&i);
	evaluate(i);

	return(0);
}

void evaluate(int x)
{
	if(x < 10)
    printf("This value %d is less than 10.\n" , x);
    else if (x > 10)
    printf("This value %d is greater than 10.\n" , x);
    else
    printf("This value passed is %d.\n" , x);
}

