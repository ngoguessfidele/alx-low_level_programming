#include <stdio.h>
#include <stdlib.h>

/**
 * main- entry point
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int amount, coins;

	coins = 0;
	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	while (amount > 0)
	{
		if (amount >= 25)
			amount = amount - 25;
		else if (amount >= 10)
			amount = amount - 10;
		else if (amount >= 5)
			amount = amount - 5;
		else if (amount >= 2)
			amount = amount - 2;
		else if (amount >= 1)
			amount = amount - 1;
		coins = coins + 1;
	}
	printf("%d\n", coins);
	return (0);
}
