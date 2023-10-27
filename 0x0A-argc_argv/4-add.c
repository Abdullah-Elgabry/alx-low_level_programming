#include <stdio.h>
#include <stdlib.h>

/**
  * main - fun that that adds positive numbers
  *
  * @argc: counter
  *
  * @argv: list of values
  *
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i = 0;
	char *j;

	while (--argc)
	{
		for (j = argv[argc]; *j; j++)
			if (*j < '0' || *j > '9')
				return (printf("Error\n"), 1);
		i += atoi(argv[argc]);
	}
	printf("%d\n", i);
	return (0);

}
