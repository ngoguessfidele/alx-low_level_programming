#include "main.h"

/**
 * string_toupper- change to upper case
 * @s: a string
 * Return: pointer to uppercase string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while ((*(s + i)) != '\0')
	{
		if (((*(s + 1)) >= 97) && ((*(s + 1)) <= 122))
		{
			*(s + 1) = (*(s + 1) - 32);
		}
		i ++;
	}
}
