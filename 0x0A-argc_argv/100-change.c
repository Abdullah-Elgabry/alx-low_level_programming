#include <stdio.h>
#include <stdlib.h>


/**
 * main - fun that prints the min num of coins
 * to make change for an amount of money.
 *
 * @argc: arguments counter
 *
 * @argv: array of val
 *
 * Return: 0 in success otherwise return - 1.
 */

int main(int argc, char *argv[])
{
	int cen, coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cen = atoi(argv[1]);

	while (cen > 0)
	{
		coin++;
		if ((cen - 25) >= 0)
		{
			cen -= 25;
			continue;
		}
		if ((cen - 10) >= 0)
		{
			cen -= 10;
			continue;
		}
		if ((cen - 5) >= 0)
		{
			cen -= 5;
			continue;
		}
		if ((cen - 2) >= 0)
		{
			cen -= 2;
			continue;
		}
		cen--;
	}

	printf("%d\n", coin);

	return (0);
}
