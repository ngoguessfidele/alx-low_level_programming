#include "main.h"

/**
 * clear_bit- set bit to 0
 * @n: pointer to int
 * @index: index
 *
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index >= 64)
		return (-1);
	i = 1 << index;
	if (*n & i)
		*n = *n ^ i;
	return (1);
}
