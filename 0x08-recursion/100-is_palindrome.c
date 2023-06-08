#include "main.h"

/**
 * _strlen_recursion- size of string
 * @s: *string
 * Return: recursion
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * _return- palindrome
 * @s: *string
 * @len: position
 * Return: logic
 */
int _return(char *s, int len)
{
	if (len < 1)
	{
		return (1);
	}
	if (*s == *(s + len))
	{
		return (_return(s + 1, len - 2));
	}
	return (0);
}

/**
 * is_palindrome- palindrome
 * @s: *string
 * Return: recursion
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (_return(s, len - 1));
}
