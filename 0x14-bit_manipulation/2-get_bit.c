#include "main.h"

/**
 * get_bit- get bit at index
 * @n: integer
 * @index: index
 * Return: value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << index;
	int val;

	if (index >= bits)
		return (-1);
	val = (n & mask) ? 1 : 0;
	return (val);
}
