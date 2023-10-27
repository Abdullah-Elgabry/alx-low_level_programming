#include <stdio.h>

/**
  * main - fun Prints all arguments it receives.
  * @argc: counter
  * @argv: list of values
  *
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
