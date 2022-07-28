#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: the number of bytes to include of @s2
 * Return: newly allocated memory in space;
 * NULL if the function fails
 */

char *string_nconcat(char *str1, char *str2, unsigned int size)
{
	char *ar;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int m;
	unsigned int p;
	unsigned int k = 0;
	unsigned int len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (j > n)
		j = n;

	len = i + j;

	ar = malloc(sizeof(char) * (len + 1));
	if (ar == NULL)
			return (NULL);

	for (p = 0; p < i; p++)
			ar[k++] = s1[p];
	for (m = 0; m < j; m++)
			ar[k++] = s2[m];

	ar[k] = '\0';
	return (ar);
}
