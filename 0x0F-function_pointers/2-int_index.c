#include "function_pointers.h"

/**
 * int_index- search for integer
 * @array: integer array
 * @size: size of array
 * @cmp: function pointer
 * Return: i on success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}

