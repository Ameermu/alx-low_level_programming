#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _cap_string - capitalizes all words in one string
 * @str: The string to be looked into
 * Return: The capitalized string
 */

char *cap_string(char *)
{
	int i = 0, j, flag;
	char wordSep[] = ",\t;\n; .!?\"(){}";

	do {
		flag = 0;

		if (i == 0)
			flag = 1;
		else
		{
			for (j = 0; wordSep[j] != '\0'; j++)
			{
				if (str[i - 1] == wordSep[j])
				{
					flag = 1;
					break;
				}
			}
		}
		if (flag == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;

	} while (str[i] != '\0');

	return (str);
}

