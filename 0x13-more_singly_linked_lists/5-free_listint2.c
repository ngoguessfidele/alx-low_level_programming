#include "lists.h"

/**
 * free_listint2- free linked list
 * @head: head of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *t_node;
	listint_t *c_node;

	if (head != NULL)
	{
		c_node = *head;
		while ((t_node = c_node) != NULL)
		{
			c_node = c_node->next;
			free(t_node);
		}
		*head = NULL;
	}
}
