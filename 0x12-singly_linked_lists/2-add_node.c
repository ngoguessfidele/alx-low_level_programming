#include "lists.h"

/**
 * add_node: add node at the start
 * @head: list
 * @str: pointer to list
 *
 * Return: address of head of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	size_t nechar;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	for (nechar = 0; str[nechar]; nechar++)
		;
	node->len = nechar;
	node->next = *head;
	*head = node;
	return(*head);
}
