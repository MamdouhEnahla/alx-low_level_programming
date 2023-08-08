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
	int fd, len = 0, b = 0;

	if (!filename)
                return (-1);
	len = strlen(text_content);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (len)
		b = write(fd, text_content, len);
	if (fd == -1 || b == -1)
		return (-1);
	close(fd);
	return (1);
}
