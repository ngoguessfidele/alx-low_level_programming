#include "main.h"

/**
 * print_alphabet_x10- print alphabet x10
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int times = 0;
	char letter = 'a';

	while (times < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		times++;
	}
}
