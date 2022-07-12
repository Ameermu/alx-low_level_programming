#include "main.h"

/**
 * print_rev - Prints a string in reverse, with a new line
 *
 * @s: The string to reverse
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = _strlen(s) - 1;

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
