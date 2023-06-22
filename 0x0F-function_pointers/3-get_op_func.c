#include "3-calc.h"

/**
 * get_op_func- chose the operation
 * @s: the operation
 *
 * Return: the operation
 */

int (*get_op_func(char *s))(int, int)
{
	op_t options[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 5)
	{
		if (*s == *options[i].op)
		{
			return (options[i].f);
		}
		i++;
	}
	return (NULL);
}
