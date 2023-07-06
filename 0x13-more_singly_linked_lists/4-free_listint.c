#include "lists.h"

/**
 * free_listint- free list
 * @head: head of list
 */

void free_listint(listint_t *head)
{
	listint_t *Next;

	while (head != NULL)
	{
		Next = head->next;
		free(head);
		head = Next;
	}
}
