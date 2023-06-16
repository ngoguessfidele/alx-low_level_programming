#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat- concatenate strings len+n
 * @s1: First string
 * @s2: Second string
 * @n: bytes of s2
 *
 * Return: pointer to string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n > len2)
	{
		n = len2;
	}
	str = malloc((len1 + n + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (; i < (size1 + n); i++)
	{
		str[i] = s2[i - len1];
	}
	str[i] = '\0';
	return (str);
}
