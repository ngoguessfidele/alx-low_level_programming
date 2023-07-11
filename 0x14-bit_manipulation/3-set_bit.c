#include "main.h"

/**
 * set_bit- set bit at index
 * @n: pointer to integer
 * @index: index
 *
 * return: 1 on success -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*n = (*n | (1 << index));
	if (index >= 64)
		return (-1);
	return (1);
}
