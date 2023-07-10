#include "main.h"

/**
 * binary_to_uint- from binary to int
 * @b: char of 1 and 0
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		uint = uint * 2 + (b[i] - '0');
	}
	return (uint);
}
