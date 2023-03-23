#include <stdio.h>

/**
 * main: this is the main
 *
 * Return: always 0
 */

int main(void)
{
	long int m, n, o, p;

	n = 1;
	o = 2;

	for (m = 1; m <= 50; m++)
	{
		if (n != 20365011074)
		{
			printf("%ld, ", n);
		}
		else
		{
			printf("%ld, ", n);
		}
		p = n + o;
		n = o;
		o = p;
	}
	return (0);
}
