#include "main.h"

/**
 *times_table- print the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int r, c, prod, tens, ones;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			prod = r * c;
			tens = prod / 10;
			ones = prod % 10;

			if (c == 0)
			{
				_putchar('0');
			}
			else if (prod < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
