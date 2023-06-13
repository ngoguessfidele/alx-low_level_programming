#include "main.h"
#include <stdio.h>

/**
 * create_array- Create array by malloc
 * @size: array size
 * @c: char
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(c));
	if (array == NULL)
	{
		return (NULL);
	}
	return (*array);
}
