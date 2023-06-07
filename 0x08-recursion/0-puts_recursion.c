#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion- This is recursion fun
 * @s: a string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
