#include "main.h"

/**
 * main - program that prints _putchar
 * Return: 0 - success
 */
int main(void)
{
	/* variable declearations*/
	char var[] = "_putchar";
	int i;
	int lenVar = sizeof(var) / sizeof(var[0]);

	for (i = 0; i < lenVar - 1; i++)
	{
		_putchar(var[i]);
	}
	_putchar('\n');
	return (0);
}
