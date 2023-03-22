#include "main.h"

/**
 * print_last_digit- print the last dig
 * @num: an integer
 *
 * Return: integer
 */

int print_last_digit(int num)
{
	int l_dig = num % 10;

	if (num < 0)
		l_dig = l_dig * -1;

	_putchar(l_dig + '0');

	return (l_dig);
}
