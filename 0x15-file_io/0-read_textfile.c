#include "main.h"

/**
 * read_textfile - this func will reads a text file and prints it to the POSIX.
 *
 * @filename: the file will be read
 *
 * @letters: bytes number will be read
 *
 * Return: bytes num
 */



ssize_t read_textfile(const char *filename, size_t letters)
{
	int op;
	ssize_t _byt;
	char buf[BUFFER_SIZE * 8];

	if (!filename || !letters)
		return (0);
	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	_byt = read(op, &buf[0], letters);
	_byt = write(STDOUT_FILENO, &buf[0], _byt);
	close(op);
	return (_byt);
}
