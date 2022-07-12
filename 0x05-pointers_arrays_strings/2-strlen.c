#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: the string that will be mesured
 *
 * Return: nothing
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
