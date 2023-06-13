#include "main.h"
#include <stdlib.h>

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
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(c));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
