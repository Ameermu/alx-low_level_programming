#include "main.h"
/**
 * test_islower - checks to see if a letter is in lower case
 *
 * @c: the letter the function checks
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int test_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
