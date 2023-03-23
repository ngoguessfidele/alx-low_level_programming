#include <stdio.h>
#include "main.h"

/**
 * print_to_98- prints to 98
 * @num: the integer
 *
 * Return: void
 */

void print_to_98(int num)
{
	if (num < 98)
	{
		while (num < 98)
		{
			printf("%d, ", num);
			num++;
		}
	}
	else if (num > 98)
	{
		while (num > 98)
		{
			printf("%d, ", num);
			num--;
		}
	}
	printf("98\n");
}


