#include <stdio.h>
/**
 * main - main block
 *
 * Description: compute and prints even numbers less than 4,000,000
 * 5 below 1024 (excluded), follwed by a new line
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, moo = 0;
	int sum = 0;

	while (moo < 4000000)
	{
		moo = a + b;
		a = b;
		b = moo;
		if (moo % 2 == 0)
			sum += moo;
	}
	printf("%i\n", sum);
	return (0);
}
