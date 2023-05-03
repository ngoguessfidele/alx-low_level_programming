#include "main.h"
#include <stdlib.h>

/**
 * _strdup- returns the pointer to new allc mem
 * @str: string to be copied
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *str1;
	unsigned int i;
	unsigned int j;

	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	str1 = (char *)malloc(sizeof(char) * (i + 1));
	if (str1 == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
		str1[j] = str[j];
	return (str1);
}
