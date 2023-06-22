#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name- print the name
 * @name: the name
 * @f: pointer to function 
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f == NULL)
		return;
	f(name);
}
