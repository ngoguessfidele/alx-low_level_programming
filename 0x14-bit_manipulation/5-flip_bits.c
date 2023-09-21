#include "main.h"

/**
 * flip_bits- flips bits
 * @n: first number
 * @m: sec number
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int com = n ^ m;
	unsigned int count;

	while (com != 0)
	{
		count += com & 1;
		com >>= 1;
	}
	return (count);
}
