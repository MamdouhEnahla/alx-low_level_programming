#include "main.h"

/**
 * append_text_to_file - Check code
 * @filename: file name
 * @text_content: text to write
 *
 * Return: 1 or -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);

	close(fd);
	return (bytes == len ? 1 : -1);
}
