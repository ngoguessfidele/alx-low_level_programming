#include "main.h"

/**
 * get_bit- gets bit at index
 * @n: the number
 * @index: the index
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	if ((n & mask) != 0)
		return (1);
	else
		return (0);
}
