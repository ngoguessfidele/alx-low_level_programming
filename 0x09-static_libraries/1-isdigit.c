#include "main.h"

/**
 *  * _isdigit- check for digit
 *   * @c: an integer
 *    *
 *     * Return: 1 for success and, 0 otherwise
 *      */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
