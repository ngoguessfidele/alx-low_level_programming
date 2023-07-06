#include "lists.h"

/**
 * free_listint2- frees list
 * @head: head of list
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *i;

	if (head != NULL)
	{
		current = *head;
		while (current != NULL)
		{
			i = current->next;
			free(current);
			current = i;
		}
		*head = NULL;
	}
}
