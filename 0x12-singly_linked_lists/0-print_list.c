#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a function
 * @list_t: list to print
 * Return: the  number of nodes
 */

size_t print_list(const list_t *h)
{
	int counter;

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
