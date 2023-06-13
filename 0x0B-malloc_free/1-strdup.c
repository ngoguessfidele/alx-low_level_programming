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
	unsigned int j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
	}
	str1 = (char *) malloc((j + 1) * sizeof(char));
	if (str1 == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		str1[i] = str[i];
	}
	return (str1);
}
