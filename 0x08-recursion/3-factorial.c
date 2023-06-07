#include "main.h"

/**
 * factorial- calculates the factorial
 * @n: the integer
 *
 * Return: -1 on failure, the res on succ
 */

int factorial(int n)
{

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

