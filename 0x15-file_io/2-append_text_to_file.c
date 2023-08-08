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
	int fd b = 0, len = 0;

	if (!filename)
		return (-1);
	if (text_content)
		len = strlen(text_content);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (len)
		b = write(fd, text_content, len);
	if (fd == -1 || b == -1)
		return (-1);
	close(fd);
	return (1);
}
