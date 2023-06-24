#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main- Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	char *opcodes = (char *) main;
	int n;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < n; i++)
	{
		printf("%02x", opcodes[i] & 0xFF);
		if (i < n - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
