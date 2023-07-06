#include "lists.h"

/**
 * print_listint- print a list ofint
 * @h: the list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	listint_t *current;

	if (h == NULL)
		return (0);

	for (current = h; current != NULL; current = current->next)
	{
		printf("%d\n", current->n);
		count++;
	}
	return (count - 1);
}
