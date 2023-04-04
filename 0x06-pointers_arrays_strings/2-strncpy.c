#include "main.h"
/**
 * *_strncpy- copies a string
 * @dest: destinatin
 * @src: source
 * @n: bytes
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\n'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}