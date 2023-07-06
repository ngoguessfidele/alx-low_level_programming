#include "lists.h"

/**
 * pop_listint- deletes and shows data
 * @head: head of list
 *
 * Return: data of head
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *newhead, *current;

	if (*head == NULL)
		return (0);
	current = *head;
	data = current->n;
	newhead = current->next;
	free(current);
	*head = newhead;

	return (data);
}
