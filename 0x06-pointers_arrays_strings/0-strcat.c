#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: the string @src is aded to
 * @src: the string appended
 *
 * Return: pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
