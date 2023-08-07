#include "main.h"

/**
 * strLen- my own strlen
 * @str: the string
 * Return: len
 */

size_t strLen(const char *str)
{
	size_t len = 0;

	if (str == NULL)
		return (0);
	while (str[len] != '\0')
		len++;
	return (len);
}
