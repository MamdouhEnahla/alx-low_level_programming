#include "main.h"

int _strlen(char *s);
/**
 * create_file - Check code
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1 or -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
        if (len)
                bytes = write(fd, text_content, len);
        if (fd == -1 || bytes == -1)
                return (-1);
        close(fd);
        return (1);
}
