#include <stdio.h>

/**
 * main- prints combination of 3 digs
 *
 * Return: 0 on success
 */

int main(void)
{
	int d1;
	int d2;
	int d3;

	for (d1 = 48; d1 < 58; d1++)
	{
		for (d2 = 49; d2 < 58; d2++)
		{
			for (d3 = 50; d3 < 58; d3++)
			{
				if (d3 > d2 && d2 > d1)
				{
					putchar(d1);
					putchar(d2);
					putchar(d3);
					if (d1 != 55 || d2 != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
