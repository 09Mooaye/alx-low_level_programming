#include "main.h"

/**
 * prints_last_digit - prints the last digit of a number
 * @n: n is an integer
 * Description: print the last digit of a number
 * Return: integer
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = n;
	x = n % 10;
	_putchar(x + '0');
	return (n % 10);
}