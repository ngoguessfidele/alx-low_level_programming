#include "main.h"

/**
 * jack_bauer- prints minutes
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h_tens, h_ones, min_tens, min_ones, h_max;

	h_max = 58;
	h_tens = '0';
	while (h_tens < '3')
	{
		if (h_tens == '2')
		{
			h_max = '4';
		}
		h_ones = '0';
		while (h_ones < h_max)
		{
			min_tens = '0';
			while (min_tens < '6')
			{
				min_ones = '0';
				while (min_ones < 58)
				{
					_putchar(h_tens);
					_putchar(h_ones);
					_putchar(':');
					_putchar(min_tens);
					_putchar(min_ones);
					_putchar('\n');
					min_ones++;
				}
				min_ones = '0';
				min_tens++;
			}
			min_tens = '0';
			h_ones++;
		}
		h_ones = '0';
		h_tens++;
	}
}
