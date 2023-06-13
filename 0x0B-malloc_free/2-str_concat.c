#include "main.h"
#include <stdlib.h>

/**
 * str_concat- concanates 2 strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: pointer to concanated string
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, j, len1, len2;

	while (*s1 != '\0')
	{
		len1++;
	}
	while (*s2 != '\0')
	{
		len2++;
	}
	str = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		str[i + j] = s2[j];
	}
	if (str == NULL)
	{
		return (NULL);
	}
	return (str)
}
