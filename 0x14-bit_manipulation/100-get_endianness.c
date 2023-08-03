#include "main.h"

/**
 * get_endianness- get the bits order
 * Return: 0 if BE, 1 if LE
 */

int get_endianness(void)
{
	int num = 1;
	unsigned char *arr = (unsigned char *)&num;

	if (arr[0] == 1)
		return (1);
	else
		return (0);
}
