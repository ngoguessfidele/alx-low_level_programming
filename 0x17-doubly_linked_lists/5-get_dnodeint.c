#include "lists.h"

/**
 * get_dnodeint_at_index- get node
 * @head: head of the list
 * @index: node index
 * Return: the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int pos = 0;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while (head != NULL)
	{
		if (pos == index)
			break;
		head = head->next;
		pos++;
	}

	return (head);
}
