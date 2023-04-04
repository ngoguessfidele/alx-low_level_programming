#include "main.h"
/**
 * _strcmp- compares the strings
 * @s1: first string
 * @s2: seconde string
 * Return: 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && j == 0)
	{
		b = s1[i] - s2[i];
		i++;
	}
	return (j);
}
