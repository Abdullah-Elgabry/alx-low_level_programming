#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the opcodes of its own main function
*
*@argc: argc num
*
*@argv: argv vector
*
*Return: one or two
*/

int main(int argc, char *argv[])
{

int sour, siz;
int (*plac)(int, char **) = main;
unsigned char un_ch;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

siz = atoi(argv[1]);

if (siz < 0)
{
printf("Error\n");
exit(2);
}

for (sour = 0; sour <  siz; sour++)
{
un_ch = *(unsigned char *)plac;
printf("%.2x", un_ch);

if (sour == siz - 1)
continue;
printf(" ");
plac++;
}
printf("\n");
return (0);
}
