#include "lists.h"

/**
 * list_len- returns the length
 * @h: linked list
 *
 * Return: length of the list
 */
size_t list_len(const list_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
