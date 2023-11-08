#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - fun checks the code
*
* @argc: The number of args
*
* @argv: arguments vec
*
* Return: Always 0.
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
int st_input, nd_input;
char *ch;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

st_input = atoi(argv[1]);
ch = argv[2];
nd_input = atoi(argv[3]);

if (get_op_func(ch) == NULL || ch[1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((*ch == '/' && nd_input == 0) || (*ch == '%' && nd_input == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(ch)(st_input, nd_input));
return (0);
}
