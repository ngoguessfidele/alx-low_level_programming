#include "main.h"
/**
 * _memset- fill block
 * @s: address
 * @b: the value
 * @n: bytes
 * 
 * Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
