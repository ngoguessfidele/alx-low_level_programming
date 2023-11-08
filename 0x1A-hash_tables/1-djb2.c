#include "hash_tables.h"

/**
 * hash_djb2- implement djb2
 * @str: string
 * Return: hash tables
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int has;
	int ch;

	has = 5381;
	while ((ch = *str++))
	{
		has = ((has << 5) + has) + ch;
	}
	return (has);
}
