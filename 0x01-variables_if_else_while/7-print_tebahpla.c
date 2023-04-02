#include <stdio.h>

/**
 * main- print in reverse
 *
 * Return: 0 on success
 */
int main(void)
{
	int c;
	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
