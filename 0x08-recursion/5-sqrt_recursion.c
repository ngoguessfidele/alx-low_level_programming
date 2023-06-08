#include "main.h"

/**
 * _sqrt_recursion- the recursionfu
 * @n: integer
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt- square root
 * @n: integer
 * @r: integer
 * Return: integer
 */

int _sqrt(int n, int r)
{
	if (n < 0)
	{
		return (-1);
	}
	if (r * r > n)
	{
		return (-1);
	}
	if (r * r == n)
	{
		return (r);
	}
	return (_sqrt(n, r + 1));
}
