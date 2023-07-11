#include "main.h"

/**
 * set_bit- set bit at index
 * @n: pointer to integer
 * @index: index
 *
 * Return: 1 on success -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	i = 1 << index;
	*n = (*n | i);
	if (index >= 64)
		return (-1);
	return (1);
}
