#include "main.h"

/**
 * create_file - Check code
 * @filename: name of file
 * @text_content: text to write
 *
 * Return: 1 or -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t b = 0;

	len = strlen(text_content);
	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
		b = write(fd, text_content, len);
	close(fd);
	return (b == len ? 1 : -1);
}
