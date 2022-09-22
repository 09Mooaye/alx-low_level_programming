#include <stdio.h>
#include <unistd.h>
/**
 * main -  Prints alphabets in lowercases except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}

	putchar('\n');

	return (0);

}
