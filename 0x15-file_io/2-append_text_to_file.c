#include "main.h"

/**
 * append_text_to_file - Check code
 * @filename: name of file
 * @text_content: text to write
 *
 * Return: 1 or -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t b = 0, len = 0;

	len = strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
		b = write(fd, text_content, len);
	close(fd);
	return (b == len ? 1 : -1);
}
