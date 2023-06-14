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
	char *s;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}
	s = malloc((len1 * sizeof(char)) + ((len2 + 1) * sizeof(char)));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j <= len2; i++, j++)
	{
		s[i] = s2[j];
	}
	return (s);
}
