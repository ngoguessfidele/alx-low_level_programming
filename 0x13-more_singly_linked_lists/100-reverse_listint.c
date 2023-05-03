#include "lists.h"

/**
 * reverse_listint- reverse list
 * @head: list
 *
 * Return: pointer to reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *r;
	listint_t *q;

	r = NULL;
	q = NULL;
	while (*head != NULL)
	{
		q = (*head)->next;
		(*head)->next = r;
		r = *head;
		*head = q;
	}
	*head = r;
	return (*head);
}
