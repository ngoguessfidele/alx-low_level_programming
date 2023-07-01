#include "lists.h"

/**
 * add_node- add node to head of  a list
 * @head: head of the list
 * @str: string in the node
 *
 * Return: pointer to the new node
 */

size_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;
	size_t str_len;

	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);
	new_head->str = strdup(str);
	for (str_len = 0; str[str_len]; str_len++)
		;
	new_head->len = str_len;
	new_head->next = *head;
	*head = new_head;

	return (*head);
}
