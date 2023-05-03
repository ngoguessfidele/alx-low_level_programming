#include "lists.h"

/**
 * get_nodeint_at_index- a given node of list
 * @head: head of list
 * @index: the node
 *
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
