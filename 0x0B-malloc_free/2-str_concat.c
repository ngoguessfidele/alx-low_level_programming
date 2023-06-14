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
	int i, j;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		S2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	s = malloc((len1 * sizeof(char)) + ((len2 + 1) *sizeof(char)));
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
