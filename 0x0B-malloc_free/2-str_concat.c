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
	unsigned int i, j;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	
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
	str = malloc((len1 + len2 + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
