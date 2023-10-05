#include <unistd.h>
/**
 * main - entry point
 *
 *Description > use write func
 *
 * to print this sen
 *
 * Return: 1 means (not success)
*/

int main(void)
{	char doubqo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, doubqo, 59);
	return (1);
}
