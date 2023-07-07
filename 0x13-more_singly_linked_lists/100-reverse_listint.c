#include "lists.h"

/**
 * reverse_listint- reverse list
 * @head: head of list
 *
 * Return: address of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *Next;

	Next = NULL;
	prev = NULL;
	while (*head != NULL)
	{
		Next = (*head)->next;
		(*head)->Next = prev;
		prev = *head;
		*head = Next;
	}
	*head = prev;
	return (*head);
}
