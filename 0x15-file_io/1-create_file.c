#include "main.h"

/**
 * get_len - this func will calc the len for the str.
 *
 * @c: str will be checked.
 *
 * Return: len of str.
 */



int get_len(char *c)
{
	int l = 0;

	if (!c)
		return (0);

	while (*c++)
		l++;
	return (l);
}



/**
 * create_file - tgis func will creates a file.
 *
 * @filename: file name will be created.
 *
 * @text_content: the txt will be write in the file
 *
 * Return: 1 if write
 * OR >> 0 on fail to write
 */



int create_file(const char *filename, char *text_content)
{
	int try_w;
	ssize_t _byt = 0;

	l = get_len(text_content);

	if (!filename)
		return (-1);
	try_w = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (try_w == -1)
		return (-1);
	if (l)
		_byt = write(try_w, text_content, l);
	close(try_w);
	return (_byt == l ? 1 : -1);
}
