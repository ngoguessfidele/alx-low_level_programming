#include "lists.h"

/**
 * free_listint- free list
 * @head: head of list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *node;
	
	while ((node = head) != NULL)
	{
		head = head->next;
		free(node);
	}
}
