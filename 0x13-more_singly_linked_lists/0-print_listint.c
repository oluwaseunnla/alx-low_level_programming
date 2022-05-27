#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: head of a list
 *
 * Return: numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
