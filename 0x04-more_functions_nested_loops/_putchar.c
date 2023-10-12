#include <unistd.h>
#include "main."

/**
 * _putchar -  writes the char c to stdout
 *
 * @c: the char to print
 *
 * Return: On success 1.on error return -1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
