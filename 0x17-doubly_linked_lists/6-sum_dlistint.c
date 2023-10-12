#include "lists.h"

/**
 * sum_dlistint- sums list data
 * @head: head of the list
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
