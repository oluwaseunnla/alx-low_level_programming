#include "lists.h"

/**
 * listint_len - returns the number of element
 * @h: head of a list
 *
 * Return: numbers of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
