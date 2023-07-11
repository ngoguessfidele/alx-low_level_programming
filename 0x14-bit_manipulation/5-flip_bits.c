#include "main.h"

/**
 * flip_bits: number of bits
 * @n: first int
 * @m: second int
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	while (n || m)
	{
		if ((n & 1) != (m & 1))
			count++;
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
