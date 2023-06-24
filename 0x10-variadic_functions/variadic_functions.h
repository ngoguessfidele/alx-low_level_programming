#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct _print- struct defining
 * @specifier: what to print
 * @print_fun: function pointer
 */

typedef struct _print
{
	char *specifier;
	void (*print_fun)(va_list args);
} options;

#endif
