#include "main.h"

/**
 * print_binary- print binary
 * @n: the int
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1LU << (sizeof(unsigned long int) * 8 - 1);
	int flag = 1;

	while (mask)
	{
		if (n & mask)
		{
			flag = 0;
			_putchar('1');
		}
		else
		{
			if (!flag)
				_putchar('0');
		}
		mask >>= 1;
	}
	if (flag)
		_putchar('0');
}
