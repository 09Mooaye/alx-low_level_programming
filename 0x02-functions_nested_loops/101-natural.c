#include <stdio.h>
/**
 * main - main funtion
 *
 * Return: always 0
 */
int main(void)
{
	int a;
	int b = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b += a;
		}
		a++;
	}
	printf("%d\n",  b);
	return (0);
}
