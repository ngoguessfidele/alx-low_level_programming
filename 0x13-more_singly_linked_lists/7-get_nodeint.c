#include "lists.h"

/**
 * get_nodeint_at_index- said
 * @head: head of list
 * @index: index
 *
 * Return: data at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current;

	current = head;
	while (count < index)
	{
		current = current->next;
		count++;
	}

	return (current);
}
