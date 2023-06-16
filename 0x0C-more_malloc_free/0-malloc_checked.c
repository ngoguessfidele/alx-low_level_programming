#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked- allocate memory using malloc
 * @b: sizeoff
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (pointer);
}
