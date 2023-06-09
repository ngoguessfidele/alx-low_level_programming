#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main- Entry point
 * @argc: number of arguments
 * @argv: arrays of arguments
 *
 * Return: 0 on success, otherwise 1
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
