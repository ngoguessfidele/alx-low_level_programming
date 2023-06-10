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
	int change, coins;

	coins = 0;
	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	change  = atoi(argv[1]);
	while (change > 0)
	{
		if (change >= 25)
			change = change - 25;
		else if (change >= 10)
			change = change - 10;
		else if (change >= 5)
			change = change - 5;
		else if (change >= 2)
			change = change - 2;
		else if (change >= 1)
			change = change - 1;
		coins = coins + 1;
	}
	printf("%d\n", coins);
	return (0);
}
