#include "variadic_functions.h"

/**
 * sum_them_all- sum up integers
 * @n: the number of arguments
 * @...: variable arguments
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;
	int num;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, in);
		sum = sum + num;
	}
	va_end(args);

	return (sum);
}
