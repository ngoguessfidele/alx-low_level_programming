#include "lists.h"

/**
 * print_list- prints a list
 * @h: pointer to head
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t  count;

	count = 0;
	if (
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] \"(nil)\"\n", 0);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count += 1;
	}
	printf("[%d] %s\n", h->len, h->str);

	return (count);
}
