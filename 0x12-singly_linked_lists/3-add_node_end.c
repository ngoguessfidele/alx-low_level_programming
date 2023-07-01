#include "lists.h"

/**
 * add_node_end- node at the end
 * @head: head of node
 * @str: string of new node
 *
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *current;
	size_t str_len;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	for (str_len = 0; str[str_len]; str_len++)
		;
	newnode->str = strdup(str);
	newnode->len = str_len;
	current = *head;
	if (current == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newnode;
	}
	return (*head);
}
