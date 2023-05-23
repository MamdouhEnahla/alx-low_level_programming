#include "main.h"

/**
 * create_file - check code
 * @filename: first arg
 * @text_content: second arg
 *
 * Return: 1 OR -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd,len = 0;
	ssize_t n_bytes = 0;

	len = _strlen(text_content);
	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (len)
		n_bytes = write(fd, text_content, len);

	close(fd);

	return (n_bytes == len ? 1 : -1);
}

/**
 * _strlen - Check code
 * @s: function arg
 *
 * Return: integer value.
 */
int _strlen(char *s)
{
	int p = 0;

	while (*s++)
		p++;

	return (p);
}
