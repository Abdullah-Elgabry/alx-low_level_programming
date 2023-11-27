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
 * append_text_to_file - this func will appends text at the end of a file.
 *
 * @filename: file name will be created.
 *
 * @text_content: the txt will be write in the file.
 *
 * Return: 1 if write
 * OR >> 0 on fail to write
 */




int append_text_to_file(const char *filename, char *text_content)
{
	int app;
	ssize_t _byt = 0, len = get_len(text_content);

	if (!filename)
		return (-1);
	app = open(filename, O_WRONLY | O_APPEND);
	if (app == -1)
		return (-1);
	if (len)
		_byt = write(app, text_content, len);
	close(app);
	return (_byt == len ? 1 : -1);
}
