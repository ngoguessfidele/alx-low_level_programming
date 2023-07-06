#include "lists.h"

/**
 * delete_nodeint_at_index- said
 * @head: head of list
 * @index: index
 *
 * Return: 1 on success or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *delete, *current;

	current = *head;
	while (count < index && current != NULL)
	{
		count++;
		current = current->next;
	}
	delete = current;
	current = delete->next;
	free(delete);
	if (delete != NULL)
		return (-1);
	return (1);
}
