#include "main.h"

/**
 * read_textfile - Check code 
 * @filename: name of file
 * @letters: number of bytes
 *
 * Return: number bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t br, bw;
	char *buf;

	buf = malloc(letters);
	if (!buf || !filename || letters == 0)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	br = read(fd, buf, letters);
	bw = write(STDOUT_FILENO, buf, br);
	free(buf);
	close(fd);
	return (bw);
}
