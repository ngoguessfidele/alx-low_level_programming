#include "main.h"
/**
 *  * _memset- fill block
 *   * @s: address
 *    * @b: the value
 *     * @n: bytes
 *      * 
 *       * Return: changed array
 *        */
char *_memset(char *s, char b, unsigned int n)
{
		int i = 0;

			for (; n > 0; i++)
					{
								s[i] = b;
										n--;
											}
				return (s);
}
