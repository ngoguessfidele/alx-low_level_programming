#include "3-calc.h"
#include <stdio.h>

/**
 * op_add- add 2 integers
 * @a: first int
 * @b: second int
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- substrates
 * @a: first int
 * @b: second int
 * Return: Difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- multiplies
 * @a: first int
 * @b: second int
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- divides
 * @a: first int
 * @b: second int
 * Return: quotient
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod- performs modules
 * @a: first int
 * @b: second int
 * Return: the modules
 */

int op_mod(int a, int b)
{
	return (a % b);
}
