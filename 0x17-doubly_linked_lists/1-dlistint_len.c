#include "lists.h"

/**
 * dlistint_len- counts elements
 * @h: the linked list
 * Return: node count
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	if (h == NULL)
		return (node_count);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
