#include "lists.h"

/**
 * free_dlistint- free the list
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((curr = head) != NULL)
	{
		head = head->next;
		free(curr);
	}
}
