#include "main.h"

/**
 * set_bit- sets bit at index
 * @n: the number
 * @index: the index
 * Return: 1 on success, or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= m;
	return (1);
}
