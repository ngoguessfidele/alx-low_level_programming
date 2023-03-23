#include "main.h"

/**
 * print_line- print a lint 
 * @n: integer
 *
 * Return: 0 always
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		fir (; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
