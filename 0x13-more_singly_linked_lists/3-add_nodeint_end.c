#include "lists.h"

/**
 * add_nodeint_end- node the end
 * @head: head of list
 * @n: data to add
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *current;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	*current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = newNode;

	return (newNode);
}

