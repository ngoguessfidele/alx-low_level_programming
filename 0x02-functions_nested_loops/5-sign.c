#include "main.h"

/**
 * print_sign- print the sign
 * @num: an integer
 *
 * Return: 1, 0, -1
 */

int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
