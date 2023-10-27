#include <stdio.h>
#include <stdlib.h>

/**
  * main - fun that multiplies two numbers.
  * @argc: counter
  * @argv: list of values
  *
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int cont;

	if (argc == 3)
	{
		cont = atoi(argv[1] * atoi(argv[2]);
		printf("%d\n", cont);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
