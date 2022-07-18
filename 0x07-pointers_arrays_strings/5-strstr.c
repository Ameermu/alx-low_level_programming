#include "main.h"
#include <string.h>

/**
 * _strstr - locate a charater in a string
 * @s: pointer to the string s to be searched
 * @c: pointer to character being searched for
 *
 * Return: pointer to the first position of the c.
 */

char *_strstr(char *s, char *c)
{
	return (strstr(s, c));
}
