#include "main.h"
#include <string.h>

/**
 * _memset - fills the first n bytes of the memory of the
 * memory area pointed to by s with constant byte b
 *
 * @s: pointer to the string s
 * @b: char variable
 * @n: size in byte of a memory space
 *
 * Return: pointer to the variable s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
