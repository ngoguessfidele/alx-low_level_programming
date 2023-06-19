#include "main.h"
#include <stdlib.h>

/**
 * argstostr- concatenates agrv
 * @ac: number of arguments
 * @av: arrays of arguments
 *
 * Return: pointer to strings
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len, len1;

	if (ac == 0)
	{
		return (NULL);
	}
	for (i = len = 0; i < ac; i++)
	{
		if (av[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = j = len1 = 0; len1 < len; j++, len1++)
	{
		if (av[i][j] == '\0')
		{
			str[len1] = '\n';
			i++;
			len1++;
			j = 0;
		}
		if (len1 < len - 1)
		{
			str[len1] = av[i][j];
		}
	}
	str[len1] = '\0';
	return (str);
}
