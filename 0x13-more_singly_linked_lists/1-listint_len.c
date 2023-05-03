#include "lists.h"

/**
 * listint_len- give number of elements
 * @h: list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++
	}
	return (num);
}
