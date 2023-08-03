#include "main.h"

/**
 * clear_bit- clear bit at index
 * @n: pointer to integer
 * @index: index
 * Return: 1 on success, or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << index;

	if (index >= bits)
		return -1;
	*n ^= mask;
	return (1);
}
