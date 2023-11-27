#include "main.h"

#define CP "Usage: cp file_from file_to\n"
#define CCERR "Error: Can't close fd %d\n"
#define CWERR "Error: Can't write to %s\n"
#define CRERR "Error: Can't read from file %s\n"


#define RUL (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - this prog will copies the content of a file to another file.
 *
 * @argumc: argument count
 *
 * @argumv: argument vector
 *
 * Return: 1 on success 0 on failure
 */
int main(int argumc, char **argumv)
{
	int start = 0, end = 0;
	ssize_t _byt;
	char _buffer[BUFFER_SIZE];

	if (argumc != 3)
		dprintf(STDERR_FILENO, CP), exit(97);
	start = open(argumv[1], O_RDONLY);


	if (start == -1)
		dprintf(STDERR_FILENO, CRERR, argumv[1]), exit(98);
	end = open(argumv[2], O_WRONLY | O_CREAT | O_TRUNC, RUL);


	if (end == -1)
		dprintf(STDERR_FILENO, CWERR, argumv[2]), exit(99);

	while ((_byt = read(start, _buffer, BUFFER_SIZE)) > 0)
		if (write(end, _buffer, _byt) != _byt)
			dprintf(STDERR_FILENO, CWERR, argumv[2]), exit(99);
	if (_byt == -1)
		dprintf(STDERR_FILENO, CRERR, argumv[1]), exit(98);

	start = close(start);
	end = close(end);
	if (start)
		dprintf(STDERR_FILENO, CCERR, start), exit(100);
	if (end)
		dprintf(STDERR_FILENO, CCERR, start), exit(100);

	return (EXIT_SUCCESS);
}
