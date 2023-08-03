#include "main.h"

/**
 * flip_bits- flip bits to change number
 * @n: first number
 * @m: second number
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	unsigned int count = 0;

	num = n ^ m;
	while (num)
	{
		if (num & 1)
			count++;
		num >>= 1;
	}
	return (count);
}
