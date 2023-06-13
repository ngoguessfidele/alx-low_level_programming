#include "main.h"
#include <stdlib.h>

/**
 * _strdup- Duplicate a string
 * @str: string to duplicate
 *
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	char *str1;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	str1 = malloc(sizeof(str));
	if (str1 == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		str1[i] = str[i];
	}
	return ( str1);
}
