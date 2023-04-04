#include "main.h"

/**
 * reverse_array- reverse
 * @a: array
 * @n: number of elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int m;

	for (i = 0; i < n--; i++)
	{
		m = a[i];
		a[i] = a[n];
		a[n] = m;
	}
}
