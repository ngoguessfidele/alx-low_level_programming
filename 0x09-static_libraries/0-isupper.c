#include "main.h"

/**
 *  * _isupper- check for uppercase
 *   * @c: character
 *    *
 *     * Return: 1 if successful
 *      */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
	        	isupper = 1;
			break;
		}
										}
		return (isupper);
}
