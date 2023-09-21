#include "main.h"

/**
 * get_endianness- get endianness
 * Return: 0 if big, or 1
 */
int get_endianness(void)
{
	unsigned int n;
	char *c;

	n = 1;
	c = (char *) &n;

	return ((int *) c);
}
