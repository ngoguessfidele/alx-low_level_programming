#include <stdio.h>

/**
 * main- comb of two digits
 *
 * Return: 0 on success
 */
int main(void)
{
	int d1;
	int d2;

	for (d1 = 48; d1 < 58; d1++)
	{
		for (d2 = 49; d2 < 58; d2++)
		{
			if (d2 > d1)
			{
				putchar(d1);
				putchar(d2);
				if ((d1 != 56) || (d2 != 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
