#include <stdio.h>

/**
 * main- base 16 in lowercase
 *
 * Return: 0 on success
 */

int main(void)
{
	int n;
	int c;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
