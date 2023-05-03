#include "main.h"
#include <stdlib.h>

/**
 * str_concat- concanates strings
 * @s1: string one
 * @s2: second string
 *
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int l;
	
	if (s1 == NULL) 
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		S2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		str[k] = s1[k];
	l = j;
	for (j = 0; j <= l; k++, j++)
		str[k] = s2[j];
	return (str);
}
