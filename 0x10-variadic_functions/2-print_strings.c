#include "variadic_functions.h"

/**
 * print_strings- prints strings
 * @separator: separates strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		if (separator && !str && i < n - 1)
		{
			printf("(nil)");
			printf("%s", separator);
		}
		if (separator && str && i < n - 1)
		{
			printf("%s", str);
			printf("%s", separator);
		}
	}
	printf("\n");
}
