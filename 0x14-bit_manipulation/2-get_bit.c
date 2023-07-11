#include "main.h"

/**
 * get_bit- bit value at index
 * @n: the integer
 * @index: index
 *
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 0;
	if (n == 0)
		return (0);
	while (i < 64)
	{
		if (index == i)
			return (n & 1);
		n = n >> 1;
		i++;
	}
	return (-1);
}
