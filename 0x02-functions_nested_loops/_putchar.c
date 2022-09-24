#include <unistd.h>

/**
 * _putchar - writes the character c to stdout.
 *
 * @c: character printed
 *
 * Return: 1 on success
 * -1 on fail
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

