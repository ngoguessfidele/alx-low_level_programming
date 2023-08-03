#include "main.h"

/**
 * binary_to_uint- changes binary to uint
 * @b: pointer to string of binary
 * Return: changed int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ret = 0;
	char c;

	if (b == NULL)
		return (0);
	while ((c = *b) != '\0')
	{
		if (c == '0' || c == '1')
		{
			ret <<= 1;
			ret += c - '0';
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (ret);
}
