#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all elements of a function
 * @h: list to print
 * Return: the  number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}
	return (counter);
}
