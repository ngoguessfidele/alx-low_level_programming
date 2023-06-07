#include "main.h"

/**
 * _strlen_recursion- string length
 * @s: the string
 *
 * Return: integer len
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (len);
	}

	len = 1 + _strlen_recursion(s + 1);

	return(len);
}
