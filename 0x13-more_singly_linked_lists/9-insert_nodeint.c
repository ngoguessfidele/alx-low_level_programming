#include "lists.h"

/**
 * insert_nodeint_at_index- said
 * @head: head of list
 * @idx: index
 * @n: data to add
 *
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *current, *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	current = *head;
	while (count < idx - 1 && current != NULL)
	{
		count++;
		current = current->next;
	}
	if (current == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = current->next;
	current->next = newnode;

	return (newnode);
}
