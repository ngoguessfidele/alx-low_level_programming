#include <unistd.h>

/**
 * _putchar- putchar implementation
 * @c: the character
 * Return: integer
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
