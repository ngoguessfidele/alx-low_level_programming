#include "lists.h"

/**
 * add_nodeint- add node the the begin..
 * @head: head of list
 * @n: data to add\
 *
 * Return: address of added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addNode;

	addNode = malloc(sizeof(listint_t));
	if (addNode == NULL)
		return (NULL);
	addNode->n = n;
	addNode->next = *head;
	*head = addNode;

	return (*head);
}
