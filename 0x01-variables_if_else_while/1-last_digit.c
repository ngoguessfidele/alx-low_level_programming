#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- this the main fun
 *
 * Return: 0 on success
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n < 10) && (n > -10))
	{
		last_digit = n;
	}
	else if ((n >= 10) || (n <= -10))
	{
		last_digit = n % 10;
	}
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else if ((last_digit < 6) && (last_digit != 0))
	{
		printf("Last digit of %d is %d", n, last_digit);
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}

