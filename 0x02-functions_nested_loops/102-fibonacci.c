#include <stdio.h>
/**
 * main - prints the first 52 fibonacci number
 *
 * Return: nothing!
 */
int main(void)
{
	int i = 0;
	long k = 1, m = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", k);
		else if (i == 1)
			printf(", %ld", m);
		else
		{
			m += k;
			k = m - k;
			printf(", %ld", m);
		}
		++i;
	}
	printf("\n");
	return (0);
}
