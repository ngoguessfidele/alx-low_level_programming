#include "variadic_functions.h"

/**
 * print_char- prints chars
 * @args: list of args
 */

void print_char(va_list args)
{
	char c = va_arg(args, char);
	
	printf("%c", c);
}

/**
 * print_int- prints ints
 * @args: arguments
 */

void print_int(va_list args)
{
	int n = va_arg(args, int);

	print("%d", n);
}

/**
 * print_float- prints floats
 * @args: arguments
 */

void print_float(va_list args)
{
	float n = va_arg(args, float);

	printf("%f", n);
}

/**
 * print_s- prints strings
 * @args: arguments
 */

void print_s(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all- prints all
 * @format: format
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int j = 0;
	char *separator = ", ";
