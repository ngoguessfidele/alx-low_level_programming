#include "lists.h"

/**
 * listint_len- gives the len of list
 * @h: head of the list
 *
 * Return: length of list
 */

size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
