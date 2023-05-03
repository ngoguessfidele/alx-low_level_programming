#include "lists.h"

/**
 * pop_listint- delete head
 * @head: list
 *
 * Return: head nodes's data
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *h;
	listint_t *c;

	if (*head == NULL)
		return (0);
	c = *head;
	num = c->n;
	h = c-next;
	free(c);
	*head = h;
	return (num);
}
