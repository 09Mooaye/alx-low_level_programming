#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assign a random number to the varible n each time it is executed
 * Description: prints if a number is positive or negative.
 * Return: o
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
