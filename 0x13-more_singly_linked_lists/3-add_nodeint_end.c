#include "lists.h"

/**
 * add_nodeint_end- add node at the end
 * @head: head of list
 * @n: int
 *
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *t;

	(void)t;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	t = *head;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		while (t->next != NULL)
		{
			t = t->next;
		}
		t->next = node;
	}
	return (*head);
}
