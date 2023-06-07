#include "main.h"

/**
 * _pow_recursion- calculates the power
 * @x: base
 * @y: exponent
 * 
 * Return: -1, 1 or power
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
